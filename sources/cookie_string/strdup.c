/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <abareux@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:41:57 by abareux           #+#    #+#             */
/*   Updated: 2024/11/08 13:51:19 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_string.h>
#include <cookie_memory.h>

t_cookie_string	cookie_string_str_dup(const t_cookie_string string)
{
	t_cookie_string	new_string;

	new_string.string = cookie_calloc(sizeof(char), string.len + 1);
	if (new_string.string == NULL)
	{
		new_string.len = 0;
		return new_string;
	}
	new_string.len = 0;
	while (new_string.len < string.len)
	{
		new_string.string[new_string.len] = string.string[new_string.len];
		new_string.len++;
	}
	return new_string;
}
