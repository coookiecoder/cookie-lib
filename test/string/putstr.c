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

#include <cookie_string.h>
#include <test.h>

int	test_putstr(void)
{
	print_test("put_str : \n");
	if (cookie_put_str("put str\n") != 8)
		return (print_error());
	print_succes();
	print_test("put_str_nl : \n");
	if (cookie_put_str_nl("put str nl") != 11)
		return (print_error());
	print_succes();
	print_test("put_str_fd : \n");
	if (cookie_put_str_fd("put str\n", 2) != 8)
		return (print_error());
	print_succes();
	print_test("put_str_fd_nl : \n");
	if (cookie_put_str_fd_nl("put str nl", 2) != 11)
		return (print_error());
	print_succes();
	return (0);
}