/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <abareux@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:03:14 by abareux           #+#    #+#             */
/*   Updated: 2024/11/08 14:31:39 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_string.h>
#include <test.h>

int	test_cookie_strdup(void)
{
	t_cookie_string	string = cookie_string_converter("hello world");
	t_cookie_string	buffer = cookie_string_str_dup(string);

	print_test("cookie_str_dup : ");
	if (cookie_strcmp(string.string, buffer.string) != COOKIE_STRCMP_EQUAL)
		return (free(string.string), free(buffer.string), print_error());
	if (string.len != buffer.len)
		return (free(string.string), free(buffer.string), print_error());
	print_succes();
	free(string.string);
	free(buffer.string);
	return (0);
}
