/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <abareux@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:22:30 by abareux           #+#    #+#             */
/*   Updated: 2024/11/11 16:22:35 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_memory.h>
#include <cookie_string.h>

char	*cookie_str_dup(const char *string)
{
	char				*new_string;
	t_cookie_string_len	len;

	len = cookie_strlen(string);
	new_string = cookie_calloc(sizeof(char), len-- + 1);
	if (new_string == NULL)
		return (new_string);
	while (len)
	{
		new_string[len] = string[len];
		len--;
	}
	new_string[0] = string[0];
	return (new_string);
}
