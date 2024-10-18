/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <abareux@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 19:10:06 by abareux           #+#    #+#             */
/*   Updated: 2024/10/18 19:10:45 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_string.h>

t_cookie_string_len	cookie_put_str(const char *string)
{
	return (write(1, string, cookie_strlen(string)));
}

t_cookie_string_len	cookie_put_str_nl(const char *string)
{
	return (write(1, string, cookie_strlen(string)) + write(1, "\n", 1));
}

t_cookie_string_len	cookie_put_str_fd(const char *string, const int fd)
{
	return (write(fd, string, cookie_strlen(string)));
}

t_cookie_string_len	cookie_put_str_fd_nl(const char *string, const int fd)
{
	return (write(fd, string, cookie_strlen(string)) + write(1, "\n", 1));
}
