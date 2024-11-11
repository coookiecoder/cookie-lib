files = string/putstr string/putchar string/strcmp string/strlen string/strdup \
		cookie_string/converter cookie_string/strcmp cookie_string/strlen cookie_string/strdup \
		memory/calloc memory/memchr memory/memcmp memory/memset

sources = $(foreach buffer, $(files), sources/$(buffer).c)
objects = $(foreach buffer, $(files), objects/$(buffer).o)

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

test: $(NAME)


$(NAME): $(objects)
	ar rcs $(NAME) $(objects)
	@echo "cookie lib done"

clean:
	rm -rf objects objects_test

fclean: clean
	rm -rf $(NAME)

re: fclean all
