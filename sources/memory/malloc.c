/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:19:08 by abareux           #+#    #+#             */
/*   Updated: 2025/03/20 10:56:15 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_memory.h>
#include <cookie_string.h>

#include <stdio.h>

#undef malloc

typedef unsigned long long int	t_cookie_memory_size;

void	*cookie_malloc(t_cookie_memory_size size, char *file, int line, const char *function) {
	void	*result = add_to_memory_manager(size);

	if (!result)
		dprintf(2, "malloc failed, file : %s, line : %d, function %s\n", file, line, function);

	return result;
}
