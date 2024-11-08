/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <abareux@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:17:18 by abareux           #+#    #+#             */
/*   Updated: 2024/11/08 18:02:01 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_memory.h>
#include <test.h>

int	test_calloc(void)
{
	char	*buffer;
	int		index;

	buffer = cookie_calloc(10, 1);
	index = 0;
	print_test("calloc : ");
	while (index < 10)
	{
		if (buffer[index++] != 0)
			return (free(buffer), print_error());
	}
	print_succes();
	return (free(buffer), 0);
}
