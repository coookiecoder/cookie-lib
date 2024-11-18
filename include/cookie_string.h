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
t_cookie_string_len	cookie_string_str_len(const t_cookie_string string);
t_cookie_string_len	cookie_string_str_len_stop(const t_cookie_string string, const char stop);
t_cookie_string_len	cookie_string_r_str_len_stop(const t_cookie_string string, const char stop);
bool				cookie_string_str_cmp(const t_cookie_string ref, const t_cookie_string cmp);
bool				cookie_string_str_cmp_n(const t_cookie_string ref, const t_cookie_string cmp, t_cookie_string_len n);

// string

t_cookie_string_len	cookie_str_len(const char *string);
t_cookie_string_len	cookie_str_len_stop(const char *string, const char stop);
t_cookie_string_len	cookie_r_str_len_stop(const char *string, const char stop);
bool				cookie_str_cmp(const char *ref, const char *cmp);
bool				cookie_str_cmp_n(const char *ref, const char *cmp, t_cookie_string_len n);
t_cookie_string_len	cookie_put_str(const char *string);
t_cookie_string_len	cookie_put_str_nl(const char *string);
t_cookie_string_len	cookie_put_char(char c);
t_cookie_string_len	cookie_put_char_nl(char c);
t_cookie_string_len	cookie_put_str_fd(const char *string, int fd);
t_cookie_string_len	cookie_put_str_fd_nl(const char *string, int fd);
t_cookie_string_len	cookie_put_char_fd(char c, int fd);
t_cookie_string_len	cookie_put_char_fd_nl(char c, int fd);
char				*cookie_str_dup(const char *string);
char				*cookie_str_copy(const char *src, char *dst);
char				*cookie_str_move(const char* src, char *dst);
bool				cookie_str_chr(const char *ref, const char *cmp);

#endif