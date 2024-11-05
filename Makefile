files = string/putstr string/putchar string/strcmp string/strlen

sources = $(foreach buffer, $(files), sources/$(buffer).c)
objects = $(foreach buffer, $(files), objects/$(buffer).o)

test_sources = test/main.c test/test.c test/string/putchar.c test/string/putstr.c test/string/strlen.c test/string/strcmp.c

CC = cc
CFLAGS = -Werror -Wextra -Wall -Iinclude -g3

NAME = cookie_lib.a

test: all
	@rm -rf .buffer
	@echo "compiling tester..."
	$(CC) $(CFLAGS) -Itest $(test_sources) $(NAME) -o tester
	@echo "launching tester..."
	@./tester
	@echo "removing tester.."
	@rm -rf tester .buffer

all: $(NAME)

objects/%.o: sources/%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(objects)
	ar rcs $(NAME) $(objects)

clean:
	rm -rf objects

fclean: clean
	rm -rf $(NAME)

re: fclean all
