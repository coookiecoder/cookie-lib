/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putchar.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <abareux@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 19:14:35 by abareux           #+#    #+#             */
/*   Updated: 2024/10/18 19:15:44 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_string.h>
#include <test.h>

static
void	print_to_buffer(int buffer, int fd)
{
	dup2(buffer, fd);
}

static
void	print_to_std_out(int backup, int fd)
{
	dup2(backup, fd);
}

int test_putchar(void)
{
	int backup_out = dup(1);
	int backup_err = dup(2);
	int buffer = open(".buffer",  O_WRONLY | O_CREAT , 0666);

	if (buffer == -1 || backup_out == -1 || backup_err == -1)
		return (print_error());

	print_test("put_char : ");
	print_to_buffer(buffer, 1);
	
	if (cookie_put_char('a') != 1)
		return (print_error());

	print_to_std_out(backup_out, 1);
	print_succes();

	print_test("put_char_nl : ");
	print_to_buffer(buffer, 1);

	if (cookie_put_char_nl('b') != 2)
		return (print_error());
	
	print_to_std_out(backup_out, 1);
	print_succes();

	print_test("put_char_fd : ");
	print_to_buffer(buffer, 2);
	
	if (cookie_put_char_fd('a', 2) != 1)
		return (print_error());
	
	print_to_std_out(backup_err, 2);
	print_succes();

	print_test("put_char_fd_nl : ");
	print_to_buffer(buffer, 2);

	if (cookie_put_char_fd_nl('b', 2) != 2)
		return (print_error());
	
	print_to_std_out(backup_err, 2);
	print_succes();

	close(buffer);
	close(backup_out);
	close(backup_err);

	return (0);
}
