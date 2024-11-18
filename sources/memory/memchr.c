/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <abareux@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:45:32 by abareux           #+#    #+#             */
/*   Updated: 2024/11/11 16:37:54 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_memory.h>

static
bool	check_sub_memory(void *mem, const t_cookie_memory_size size_addr_1, void *sub_mem, const t_cookie_memory_size size_addr_2, t_cookie_memory_size start)
{
	t_cookie_memory_size	index;

	index = 0;
	while (start < size_addr_1 && index < size_addr_2)
	{
		if (*((unsigned char *)mem + start++) != *((unsigned char *)sub_mem + index++))
			return false;
	}
	if (index == size_addr_2)
		return true;
	return false;
}

void	*cookie_mem_chr(void *mem, const t_cookie_memory_size size_addr_1, void *sub_mem, const t_cookie_memory_size size_addr_2)
{
	t_cookie_memory_size	index;

	index = 0;
	while (index < size_addr_1)
	{
		if (*((unsigned char *) mem + index) == *(unsigned char *)sub_mem)
		{
			if (check_sub_memory(mem, size_addr_1, sub_mem, size_addr_2, index))
				return mem + index;
		}
		index++;
	}
	return NULL;
}
