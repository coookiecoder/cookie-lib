/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cookie_string.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <abareux@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 17:10:25 by abareux           #+#    #+#             */
/*   Updated: 2024/10/18 18:22:41 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COOKIE_STRING_H
# define COOKIE_STRING_H

# include <unistd.h>

# include <cookie_bool.h>

typedef unsigned long long int	t_cookie_string_len;

t_cookie_string_len	cookie_strlen(const char *string);
t_cookie_string_len	cookie_strlen_stop(const char *string, char stop);
t_cookie_string_len	cookie_r_strlen_stop(const char *string, char stop);
bool				cookie_strcmp(const char *ref, const char *cmp);
bool				cookie_strcmp_n(const char *ref, const char *cmp, int n);
t_cookie_string_len	cookie_put_str(const char *string);
t_cookie_string_len	cookie_put_str_nl(const char *string);
t_cookie_string_len	cookie_put_char(char c);
t_cookie_string_len	cookie_put_char_nl(char c);
t_cookie_string_len	cookie_put_str_fd(const char *string, int fd);
t_cookie_string_len	cookie_put_str_fd_nl(const char *string, int fd);
t_cookie_string_len	cookie_put_char_fd(char c, int fd);
t_cookie_string_len	cookie_put_char_fd_nl(char c, int fd);

#endif