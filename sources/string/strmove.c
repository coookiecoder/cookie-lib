/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <abareux@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:26:39 by abareux           #+#    #+#             */
/*   Updated: 2024/11/18 17:26:43 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_memory.h>
#include <cookie_string.h>

char	*cookie_str_move(const char* src, char *dst)
{
	return cookie_mem_move(src, dst, cookie_str_len(src) + 1);
}