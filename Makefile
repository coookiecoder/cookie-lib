files = string/putstr string/putchar string/strcmp string/strlen

sources = $(foreach buffer, $(files), sources/$(buffer).c)
objects = $(foreach buffer, $(files), objects/$(buffer).o)

files_test = main test string/putstr string/putchar string/strcmp string/strlen

sources_test = $(foreach buffer, $(files_test), sources_test/$(buffer).c)
objects_test = $(foreach buffer, $(files_test), objects_test/$(buffer).o)

CC = cc
CFLAGS = -Werror -Wextra -Wall -Iinclude -g3
CFLAGS_TEST = -Werror -Wextra -Wall -Iinclude -Isources_test -g3

NAME = cookie_lib.a

test: $(NAME) $(objects_test)
	@rm -rf .buffer
	@echo "compiling tester..."
	$(CC) $(CFLAGS) -Itest $(objects_test) $(NAME) -o tester
	@echo "launching tester..."
	@./tester
	@echo "removing tester.."
	@rm -rf tester .buffer

all: $(NAME)

objects/%.o: sources/%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -o $@ -c $<

objects_test/%.o: sources_test/%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS_TEST) -o $@ -c $<

$(NAME): $(objects)
	ar rcs $(NAME) $(objects)
	@echo "coookie lib done"

clean:
	rm -rf objects objects_test

fclean: clean
	rm -rf $(NAME)

re: fclean all
