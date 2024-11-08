/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cookie_memory.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <abareux@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:48:27 by abareux           #+#    #+#             */
/*   Updated: 2024/11/08 13:48:34 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COOKIE_MEMORY_H
# define COOKIE_MEMORY_H

# include <cookie_string.h>

void    *cookie_calloc(size_t size, size_t number_of_element);

void    *cookie_memset(void *data, size_t size, char byte);

#endif
