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

# define COOKIE_MEM_CMP_EQUAL 0
# define COOKIE_MEM_CMP_NOT_EQUAL 1

typedef unsigned long long int	t_cookie_memory_size;

void		*cookie_malloc(t_cookie_memory_size size);
void		cookie_free(const void *memory);
void		cookie_exit(int code);

# define malloc(x) cookie_malloc(x)
# define free(x) cookie_free(x)
# define exit(x) cookie_exit(x)

void		*cookie_calloc(size_t size, size_t number_of_element);
const void	*cookie_mem_chr(const void* mem, t_cookie_memory_size size_addr_1, const void* sub_mem, t_cookie_memory_size size_addr_2);
const void	*cookie_mem_r_chr(const void* mem, const t_cookie_memory_size size_addr_1, const void* sub_mem, const t_cookie_memory_size size_addr_2);
bool		cookie_mem_cmp(const void* mem1, const void* mem2, t_cookie_memory_size size);
void		*cookie_mem_set(void *data, size_t size, char byte);
void		*cookie_mem_move(const void* src_mem, void *dst_mem, t_cookie_memory_size size);
void		*cookie_mem_copy(const void* src_mem, void *dst_mem, t_cookie_memory_size size);
void		*cookie_mem_dup(const void* mem_src, t_cookie_memory_size size);

//do not play with that

typedef struct s_memory {
	void					*memory;
	bool					used;
	t_cookie_memory_size	size;
	struct s_memory			*next;
} t_memory;

void		*add_to_memory_manager(t_cookie_memory_size size);
t_memory	*first_available_memory(t_cookie_memory_size size);
void		set_memory_unused(const void *memory_allocated);
void		clear_memory();

#endif
