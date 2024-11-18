/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <abareux@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 19:11:51 by abareux           #+#    #+#             */
/*   Updated: 2024/10/18 19:12:00 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_string.h>

t_cookie_string_len	cookie_str_len(const char *string)
{
	const char	*end = string;

	while (*end)
		end++;
	return end - string;
}

t_cookie_string_len	cookie_str_len_stop(const char *string, const char stop)
{
	const char	*end = string;

	while (*end && *end != stop)
		end++;
	return end - string;
}

t_cookie_string_len	cookie_r_str_len_stop(const char *string, const char stop)
{
	const char	*end = string;

	while (*end)
		end++;
	while (end != string && *end != stop)
		end--;
	return end - string;
}
