/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <abareux@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 19:19:20 by abareux           #+#    #+#             */
/*   Updated: 2024/10/18 19:23:13 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_string.h>
#include <test.h>

int	test_strlen(void)
{
	print_test("strlen : ");
	if (cookie_strlen("strlen") != 6)
		return (print_error());
	print_succes();
	print_test("strlen_stop : ");
	if (cookie_strlen_stop("test", 't') != 0)
		return (print_error());
	print_succes();
	print_test("r_strlen_stop : ");
	if (cookie_r_strlen_stop("test", 't') != 3)
		return (print_error());
	print_succes();
	return (0);
}