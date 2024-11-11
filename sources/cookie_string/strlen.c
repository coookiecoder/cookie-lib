/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <abareux@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:44:52 by abareux           #+#    #+#             */
/*   Updated: 2024/11/11 17:08:44 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_string.h>

t_cookie_string_len	cookie_string_strlen(const t_cookie_string string)
{
	return string.len;
}

t_cookie_string_len	cookie_string_strlen_stop(const t_cookie_string string, const char stop)
{
	return (cookie_strlen_stop(string.string, stop));
}

t_cookie_string_len	cookie_string_r_strlen_stop(const t_cookie_string string, const char stop)
{
	return (cookie_r_strlen_stop(string.string, stop));
}