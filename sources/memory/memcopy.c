/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcopy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <abareux@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:06:19 by abareux           #+#    #+#             */
/*   Updated: 2024/11/18 17:06:40 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_memory.h>

void	*cookie_mem_copy(void* src_mem, void *dst_mem, const t_cookie_memory_size size)
{
	t_cookie_memory_size	index = 0;

	while(index < size)
	{
		*((unsigned char *)dst_mem + index) = *((unsigned char *)src_mem + index);
		index++;
	}
	return dst_mem;
}
