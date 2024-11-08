/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <abareux@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:47:21 by abareux           #+#    #+#             */
/*   Updated: 2024/11/08 14:29:56 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_memory.h>

void    *cookie_calloc(size_t size, size_t number_of_element)
{
    if (size * number_of_element / number_of_element != size)
        return (NULL);
    return (cookie_memset(malloc(size * number_of_element), size * number_of_element, 0));
}