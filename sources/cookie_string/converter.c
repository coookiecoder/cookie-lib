/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <abareux@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:06:47 by abareux           #+#    #+#             */
/*   Updated: 2024/11/08 14:09:30 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_string.h>
#include <cookie_memory.h>

t_cookie_string	cookie_string_converter(const char *string)
{
	t_cookie_string		new_string;
	t_cookie_string_len	len;

	len = cookie_str_len(string);
	new_string.string = cookie_calloc(sizeof(char), len + 1);
	if (new_string.string == NULL)
	{
		new_string.len = 0;
		return new_string;
	}
	new_string.len = 0;
	while (new_string.len < len)
	{
		new_string.string[new_string.len] = string[new_string.len];
		new_string.len++;
	}
	return new_string;
}
