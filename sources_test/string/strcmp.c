/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <abareux@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:38:45 by abareux           #+#    #+#             */
/*   Updated: 2024/11/05 13:38:52 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_bool.h>
#include <cookie_string.h>
#include <test.h>

int test_strcmp(void)
{
	print_test("strcmp : ");
	if (cookie_strcmp("strcmp", "strcmp") != COOKIE_STRCMP_EQUAL)
		return (print_error());
	if (cookie_strcmp("strcmp", "strcmo") != COOKIE_STRCMP_NOT_EQUAL)
		return (print_error());
	print_succes();
	print_test("strcmp_n : ");
	if (cookie_strcmp_n("strcmp", "strcmp", 6) != COOKIE_STRCMP_EQUAL)
		return (print_error());
	if (cookie_strcmp_n("strcmp", "strcmo", 5) != COOKIE_STRCMP_EQUAL)
		return (print_error());
	if (cookie_strcmp_n("strcmp", "strcmo", 6) != COOKIE_STRCMP_NOT_EQUAL)
		return (print_error());
	print_succes();
	return (0);
}
