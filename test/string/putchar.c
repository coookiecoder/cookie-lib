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

int test_putchar(void)
{
	print_test("put_char : \n");
	if (cookie_put_char('a') != 1)
		return (print_error());
	cookie_put_char('\n');
	print_succes();
	print_test("put_char_nl : \n");
	if (cookie_put_char_nl('b') != 2)
		return (print_error());
	print_succes();
	print_test("put_char_fd : \n");
	if (cookie_put_char_fd('a', 2) != 1)
		return (print_error());
	cookie_put_char('\n');
	print_succes();
	print_test("put_char_fd_nl : \n");
	if (cookie_put_char_fd_nl('b', 2) != 2)
		return (print_error());
	print_succes();
	return (0);
}