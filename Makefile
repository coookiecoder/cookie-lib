files = string/putstr string/putchar string/strcmp string/strlen string/strdup \
		cookie_string/converter cookie_string/strcmp cookie_string/strlen cookie_string/strdup \
		memory/calloc memory/memchr memory/memcmp memory/memset

sources = $(foreach buffer, $(files), sources/$(buffer).c)
objects = $(foreach buffer, $(files), objects/$(buffer).o)
objects_shared = $(foreach buffer, $(files), objects_shared/$(buffer).o)

CC = cc
CFLAGS = -Werror -Wextra -Wall -Iinclude -g3
CFLAGS_TEST = -Werror -Wextra -Wall -Iinclude -Isources_test -g3

NAME = cookie_lib.a
NAME_SHARED = libcookie_lib.so

all: $(NAME) $(NAME_SHARED)

objects/%.o: sources/%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -o $@ -c $<

objects_shared/%.o: sources/%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(objects)
	ar rcs $(NAME) $(objects)
	@echo "cookie lib done"

$(NAME_SHARED): $(objects_shared)
	$(CC) -shared -o $(NAME_SHARED) $(objects_shared)
	@echo "Shared cookie lib done"

clean:
	rm -rf objects objects_shared

fclean: clean
	rm -rf $(NAME) $(NAME_SHARED)

re: fclean all
