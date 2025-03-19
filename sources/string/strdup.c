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
	t_cookie_string_len	len = cookie_str_len(string);
	char				*new_string = calloc(sizeof(char), len-- + 1);

	if (new_string == NULL)
		return new_string;

	return cookie_mem_copy(new_string, new_string, len + 1);
}

char	*cookie_str_dup_n(const char *string, t_cookie_string_len n) {
	t_cookie_string_len	len = cookie_str_len(string);

	if (len > n)
		len = n;

	char				*new_string = calloc(sizeof(char), len-- + 1);

	if (new_string == NULL)
		return new_string;

	cookie_mem_copy(new_string, new_string, len + 1);

	new_string[len] = '\0';

	return new_string;
}