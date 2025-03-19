/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 17:00:38 by abareux           #+#    #+#             */
/*   Updated: 2025/03/19 17:00:41 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_memory.h>

#undef free
#undef exit

void	cookie_free(const void *memory) {
	set_memory_unused(memory);
}

void	cookie_exit(const int code) {
	clear_memory();
	exit(code);
}
