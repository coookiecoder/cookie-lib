#ifndef TEST_H
# define TEST_H

# include <cookie_string.h>

int		print_error(void);
void	print_succes(void);
void	print_test(const char *test_name);

int		test_putchar(void);
int		test_putstr(void);
int		test_strlen(void);
int		test_strcmp(void);

#endif
