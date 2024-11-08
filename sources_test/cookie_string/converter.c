/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <abareux@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:03:14 by abareux           #+#    #+#             */
/*   Updated: 2024/11/08 14:16:31 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_string.h>
#include <test.h>

int	test_converter(void)
{
	t_cookie_string	string = cookie_string_converter("hello world");

	print_test("converter : ");
	if (cookie_strcmp(string.string, "hello world") != COOKIE_STRCMP_EQUAL)
		return (free(string.string), print_error());
	if (string.len != 11)
		return (free(string.string), print_error());
	print_succes();
	free(string.string);
	return (0);
}
