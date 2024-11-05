/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <abareux@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 19:18:45 by abareux           #+#    #+#             */
/*   Updated: 2024/10/18 19:24:12 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

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

int	test_putstr(void)
{	
	int backup_out = dup(1);
	int backup_err = dup(2);
	int buffer = open(".buffer",  O_WRONLY | O_CREAT , 0666);

	if (buffer == -1 || backup_out == -1 || backup_err == -1)
		return (print_error());

	print_test("put_str : ");
	print_to_buffer(buffer, 1);

	if (cookie_put_str("put str\n") != 8)
		return (print_error());
	
	print_to_std_out(backup_out, 1);
	print_succes();

	print_test("put_str_nl : ");
	print_to_buffer(buffer, 1);

	if (cookie_put_str_nl("put str nl") != 11)
		return (print_error());

	print_to_std_out(backup_out, 1);
	print_succes();

	print_test("put_str_fd : ");
	print_to_buffer(buffer, 2);

	if (cookie_put_str_fd("put str\n", 2) != 8)
		return (print_error());

	print_to_std_out(backup_out, 2);
	print_succes();

	print_test("put_str_fd_nl : ");
	print_to_buffer(buffer, 2);

	if (cookie_put_str_fd_nl("put str nl", 2) != 11)
		return (print_error());

	print_to_std_out(backup_out, 2);
	print_succes();

	close(buffer);
	close(backup_out);
	close(backup_err);

	return (0);
}
