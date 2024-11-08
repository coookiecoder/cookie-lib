/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cookie_memory.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <abareux@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:48:27 by abareux           #+#    #+#             */
/*   Updated: 2024/11/08 18:00:49 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COOKIE_MEMORY_H
# define COOKIE_MEMORY_H

# include <cookie_string.h>

# define COOKIE_MEMCMP_EQUAL 0
# define COOKIE_MEMCMP_NOT_EQUAL 1

typedef unsigned long long int	t_cookie_memory_size;

void	*cookie_calloc(size_t size, size_t number_of_element);

void	*cookie_mem_chr(void *mem, const t_cookie_memory_size size_addr_1, void *sub_mem, const t_cookie_memory_size size_addr_2);
bool	cookie_mem_cmp(void *mem1, void *mem2, t_cookie_memory_size size);
void	*cookie_mem_set(void *data, size_t size, char byte);

#endif
