/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:19:08 by abareux           #+#    #+#             */
/*   Updated: 2025/03/19 16:19:10 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_memory.h>

#undef malloc

typedef unsigned long long int	t_cookie_memory_size;

void	*cookie_malloc(t_cookie_memory_size size) {
	void	*result = add_to_memory_manager(size);

	return result;
}
