/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <abareux@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:01:35 by abareux           #+#    #+#             */
/*   Updated: 2024/11/08 17:19:55 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_memory.h>
#include <test.h>

int	test_memchr(void)
{
	int buffer[20] = {12,654,42,56,43,6,58,245,68,4,21,68,54,21,654,654,65,123,564,687};
	int sub_buffer[3] = {4,21,68};
	int sub_buffer2[3] = {4,1,1};
	int *mem_found = cookie_mem_chr(buffer, 20 * sizeof(int), sub_buffer, 3 * sizeof(int));

	print_test("mem_chr : ");
	if (*(mem_found + 0) != buffer[9])
		return (print_error());
	if (*(mem_found + 1) != buffer[10])
		return (print_error());
	if (*(mem_found + 2) != buffer[11])
		return (print_error());
	if (*(mem_found + 3) != buffer[12])
		return (print_error());
	if (*(mem_found + 4) != buffer[13])
		return (print_error());

	mem_found = cookie_mem_chr(buffer, 20 * sizeof(int), sub_buffer2, 3 * sizeof(int));
	if (mem_found != NULL)
		return (print_error());

	print_succes();
	return (0);
}