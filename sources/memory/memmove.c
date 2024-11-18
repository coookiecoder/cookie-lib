/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <abareux@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:49:49 by abareux           #+#    #+#             */
/*   Updated: 2024/11/18 16:49:55 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_memory.h>

void	*cookie_mem_move(const void* src_mem, void *dst_mem, const t_cookie_memory_size size)
{
	t_cookie_memory_size	index = size;

	if (!dst_mem)
		return cookie_mem_dup(src_mem, size);
	if (src_mem > dst_mem)
		return cookie_mem_copy(src_mem, dst_mem, size);
	while (index > 0)
	{
		*((unsigned char *)dst_mem + index) = *((unsigned char *)src_mem + index);
		index++;
	}
	return dst_mem;
}