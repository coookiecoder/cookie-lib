/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <abareux@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:52:42 by abareux           #+#    #+#             */
/*   Updated: 2024/11/18 16:52:42 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_memory.h>

void	*cookie_mem_dup(const void* mem_src, const t_cookie_memory_size size)
{
	t_cookie_memory_size	index = 0;
	unsigned char			*mem_dst = malloc(sizeof(unsigned char) * size);

	if (!mem_dst)
		return NULL;
	while (index < size)
	{
		mem_dst[index] = *((unsigned char *)mem_src + index);
		index++;
	}
	return mem_dst;
}