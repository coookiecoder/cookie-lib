/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory_manager.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:23:34 by abareux           #+#    #+#             */
/*   Updated: 2025/03/19 16:23:38 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_memory.h>

#undef malloc
#undef free

t_memory memory = {NULL, true, 0, NULL};

void	*add_to_memory_manager(const t_cookie_memory_size size) {
	t_memory *memory = first_available_memory(size);

	if (memory == NULL)
		return NULL;
	return memory->memory;
}

t_memory	*first_available_memory(const t_cookie_memory_size size) {
	t_memory	*current = &memory;

	while ((current->size != size || current->used == true) && current->next) {
		current = current->next;
	}

	if (current->size == size && current->used == false) {
		return current;
	}

	current->next = malloc(sizeof(t_memory));

	if (current->next == NULL)
		return NULL;

	current->next->memory = malloc(size);

	if (current->next->memory == NULL)
		return free(current->next), current->next = NULL, NULL;

	current->next->used = true;
	current->next->size = size;
	current->next->next = NULL;

	return current->next;
}

void	set_memory_unused(const void *memory_allocated) {
	t_memory	*current = &memory;

	while (current->memory != memory_allocated && current->next) {
		current = current->next;
	}

	if (current->memory == memory_allocated && current->used == true)
		current->used = false;
}

void	clear_memory() {
	t_memory	*current = memory.next;
	t_memory	*current_next;

	while (current) {
		current_next = current->next;

		free(current->memory);
		free(current);

		current = current_next;
	}
}