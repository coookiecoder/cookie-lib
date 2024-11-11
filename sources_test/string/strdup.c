/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <abareux@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:29:16 by abareux           #+#    #+#             */
/*   Updated: 2024/11/11 16:29:16 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_string.h>
#include <test.h>

int	test_strdup(void)
{
	const t_cookie_string	string = cookie_string_converter("hello world");
	char					*buffer = cookie_str_dup(string.string);

	print_test("str_dup : ");
	if (cookie_strcmp(string.string, buffer) != COOKIE_STRCMP_EQUAL)
		return (free(string.string), free(buffer), print_error());
	if (string.len != cookie_strlen(buffer))
		return (free(string.string), free(buffer), print_error());
	print_succes();
	free(string.string);
	free(buffer);
	return (0);
}
