#include "test.h"

int	print_error(void)
{
	write(1, "ERROR\n", 6);
	return (1);
}

void	print_succes(void)
{
	write(1, "SUCCESS\n", 8);
}

void	print_test(const char *test_name)
{
	write(1, "testing : ", 10);
	write(1, test_name, cookie_strlen(test_name));
}