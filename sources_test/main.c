/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <abareux@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:13:07 by abareux           #+#    #+#             */
/*   Updated: 2024/11/08 14:12:16 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_string.h>
#include "test.h"

int	main(void)
{
	cookie_put_str("\ntesting string sub module\n\n");
	if (test_putchar())
		return (1);
	if (test_putstr())
		return (1);
	if (test_strlen())
		return (1);
	if (test_strcmp())
		return (1);
	if (test_strdup())
		return (1);
	if (test_converter())
		return (1);
	cookie_put_str("\ntesting memory sub module\n\n");
	if (test_calloc())
		return (1);
	if (test_memchr())
		return (1);
	if (test_memcmp())
		return (1);
	if (test_memset())
		return (1);
	return (0);
}
