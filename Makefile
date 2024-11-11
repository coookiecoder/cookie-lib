files = string/putstr string/putchar string/strcmp string/strlen string/strdup \
		cookie_string/converter cookie_string/strcmp cookie_string/strlen cookie_string/strdup \
		memory/calloc memory/memchr memory/memcmp memory/memset

sources = $(foreach buffer, $(files), sources/$(buffer).c)
objects = $(foreach buffer, $(files), objects/$(buffer).o)

files_test = main test $(files)

sources_test = $(foreach buffer, $(files_test), sources_test/$(buffer).c)
objects_test = $(foreach buffer, $(files_test), objects_test/$(buffer).o)

CC = cc
CFLAGS = -Werror -Wextra -Wall -Iinclude -g3
CFLAGS_TEST = -Werror -Wextra -Wall -Iinclude -Isources_test -g3

NAME = cookie_lib.a

all: test

objects/%.o: sources/%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -o $@ -c $<

objects_test/%.o: sources_test/%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS_TEST) -o $@ -c $<

test: $(NAME) $(objects_test)
	@rm -rf .buffer
	@echo "compiling tester..."
	$(CC) $(CFLAGS) -Itest $(objects_test) $(NAME) -o tester
	@echo "launching tester..."
	@./tester
	@valgrind --leak-check=full ./tester
	@echo "removing tester.."
	@rm -rf tester .buffer

test_fast: $(NAME) $(objects_test)
	@rm -rf .buffer
	@echo "compiling tester..."
	$(CC) $(CFLAGS) -Itest $(objects_test) $(NAME) -o tester
	@echo "launching tester..."
	@./tester
	@echo "removing tester.."
	@rm -rf tester .buffer

$(NAME): $(objects)
	ar rcs $(NAME) $(objects)
	@echo "cookie lib done"

clean:
	rm -rf objects objects_test

fclean: clean
	rm -rf $(NAME)

re: fclean all
