/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putchar.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <abareux@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 19:11:13 by abareux           #+#    #+#             */
/*   Updated: 2024/10/18 19:11:27 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_string.h>

t_cookie_string_len	cookie_put_char(const char c)
{
	return (write(1, &c, 1));
}

t_cookie_string_len	cookie_put_char_nl(const char c)
{
	return (write(1, &c, 1) + write(1, "\n", 1));
}

t_cookie_string_len	cookie_put_char_fd(const char c, const int fd)
{
	return (write(fd, &c, 1));
}

t_cookie_string_len	cookie_put_char_fd_nl(const char c, const int fd)
{
	return (write(fd, &c, 1) + write(fd, "\n", 1));
}
