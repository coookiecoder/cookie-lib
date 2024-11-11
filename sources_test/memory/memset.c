/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <abareux@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:17:38 by abareux           #+#    #+#             */
/*   Updated: 2024/11/08 14:22:28 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_memory.h>
#include <test.h>

int	test_memset(void)
{
	char	buffer[10];
	int		index;

	cookie_mem_set(buffer, sizeof(char) * 10, 'a');
	index = 0;
	print_test("mem_set : ");
	while (index < 10)
	{
		if (buffer[index++] != 'a')
			return (print_error());
	}
	print_succes();
	return (0);
}
