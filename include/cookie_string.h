/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cookie_string.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <abareux@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 17:10:25 by abareux           #+#    #+#             */
/*   Updated: 2024/11/11 16:46:13 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COOKIE_STRING_H
# define COOKIE_STRING_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

# include <cookie_bool.h>

# define COOKIE_STRCMP_EQUAL 0
# define COOKIE_STRCMP_NOT_EQUAL 1

typedef unsigned long long int	t_cookie_string_len;

typedef struct s_cookie_string
{
	char				*string;
	t_cookie_string_len	len;
}	t_cookie_string;

// cookie-string

t_cookie_string		cookie_string_converter(const char *string);
t_cookie_string		cookie_string_str_dup(const t_cookie_string string);
t_cookie_string_len	cookie_string_strlen(const t_cookie_string string);
t_cookie_string_len	cookie_string_strlen_stop(const t_cookie_string string, const char stop);
t_cookie_string_len	cookie_string_r_strlen_stop(const t_cookie_string string, const char stop);
bool				cookie_string_strcmp(const t_cookie_string ref, const t_cookie_string cmp);
bool				cookie_string_strcmp_n(const t_cookie_string ref, const t_cookie_string cmp, t_cookie_string_len n);

// string

t_cookie_string_len	cookie_strlen(const char *string);
t_cookie_string_len	cookie_strlen_stop(const char *string, const char stop);
t_cookie_string_len	cookie_r_strlen_stop(const char *string, const char stop);
bool				cookie_strcmp(const char *ref, const char *cmp);
bool				cookie_strcmp_n(const char *ref, const char *cmp, t_cookie_string_len n);
t_cookie_string_len	cookie_put_str(const char *string);
t_cookie_string_len	cookie_put_str_nl(const char *string);
t_cookie_string_len	cookie_put_char(char c);
t_cookie_string_len	cookie_put_char_nl(char c);
t_cookie_string_len	cookie_put_str_fd(const char *string, int fd);
t_cookie_string_len	cookie_put_str_fd_nl(const char *string, int fd);
t_cookie_string_len	cookie_put_char_fd(char c, int fd);
t_cookie_string_len	cookie_put_char_fd_nl(char c, int fd);
char				*cookie_str_dup(const char *string);

#endif