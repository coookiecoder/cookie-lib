/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <abareux@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:17:18 by abareux           #+#    #+#             */
/*   Updated: 2024/11/08 14:26:23 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_memory.h>
#include <test.h>

int	test_calloc(void)
{
	char	*buffer = cookie_calloc(10, 1);

	print_test("calloc : ");
	for (int index = 0; index < 10; index++)
	{
		if (buffer[index] != 0)
			return (free(buffer), print_error());
	}
	print_succes();
	free(buffer);
	return (0);
}
