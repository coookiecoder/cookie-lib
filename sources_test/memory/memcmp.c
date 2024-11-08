/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <abareux@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:09:40 by abareux           #+#    #+#             */
/*   Updated: 2024/11/08 18:02:37 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_memory.h>
#include <test.h>

int	test_memcmp(void)
{
	int buffer1[5] = {0, 1, 2, 3, 4};
	int buffer2[5] = {0, 1, 2, 3, 4};
	int buffer3[5] = {0, 1, 5, 3, 4};

	print_test("mem_cmp : ");
	if (cookie_mem_cmp(buffer1, buffer2, sizeof(int) * 5) != COOKIE_MEMCMP_EQUAL)
		return (print_error());
	if (cookie_mem_cmp(buffer1, buffer3, sizeof(int) * 5) != COOKIE_MEMCMP_NOT_EQUAL)
		return (print_error());
	print_succes();
	return (0);
}
