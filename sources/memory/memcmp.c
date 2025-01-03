/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <abareux@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:46:40 by abareux           #+#    #+#             */
/*   Updated: 2024/11/08 16:46:40 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_memory.h>

bool	cookie_mem_cmp(const void* mem1, const void* mem2, const t_cookie_memory_size size)
{
	t_cookie_memory_size	index = 0;

	while (index < size)
	{
		if (*(unsigned char *)(mem1 + index) != *(unsigned char *)(mem2 + index))
			return COOKIE_MEM_CMP_NOT_EQUAL;
		index++;
	}
	return COOKIE_MEM_CMP_EQUAL;
}
