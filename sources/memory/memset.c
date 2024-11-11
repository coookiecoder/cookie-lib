/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <abareux@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:53:19 by abareux           #+#    #+#             */
/*   Updated: 2024/11/08 13:58:31 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_memory.h>

void	*cookie_mem_set(void *data, const size_t size, const char byte)
{
	size_t	index;

	if (data == NULL)
		return (data);
	index = 0;
	while (index < size)
		*((char *)data + index++) = byte;
	return (data);
}
