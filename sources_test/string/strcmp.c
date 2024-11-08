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
	if (cookie_strcmp("strcmp", "strcmp") != false)
		return (print_error());
	if (cookie_strcmp("strcmp", "strcmo") != true)
		return (print_error());
	print_succes();
	print_test("strcmp n : ");
	if (cookie_strcmp_n("strcmp", "strcmp", 6) != false)
		return (print_error());
	if (cookie_strcmp_n("strcmp", "strcmo", 5) != false)
		return (print_error());
	if (cookie_strcmp_n("strcmp", "strcmo", 6) != true)
		return (print_error());
	print_succes();
	return (0);
}