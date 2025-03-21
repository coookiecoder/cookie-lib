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

#include <string.h>

# include <cookie_bool.h>

# define COOKIE_STRCMP_EQUAL 0
# define COOKIE_STRCMP_NOT_EQUAL 1

typedef size_t	t_cookie_string_len;

typedef struct s_cookie_string
{
	char				*string;
	t_cookie_string_len	len;
}	t_cookie_string;

// cookie-string

t_cookie_string		cookie_string_converter(const char *string);
t_cookie_string		cookie_string_str_dup(t_cookie_string string);
t_cookie_string_len	cookie_string_str_len(t_cookie_string string);
t_cookie_string_len	cookie_string_str_len_stop(t_cookie_string string, char stop);
t_cookie_string_len	cookie_string_r_str_len_stop(t_cookie_string string, char stop);
bool				cookie_string_str_cmp(t_cookie_string ref, t_cookie_string cmp);
bool				cookie_string_str_cmp_n(t_cookie_string ref, t_cookie_string cmp, t_cookie_string_len n);

// string

t_cookie_string_len	cookie_str_len(const char *string);
t_cookie_string_len	cookie_str_len_stop(const char *string, char stop);
t_cookie_string_len	cookie_str_r_len_stop(const char *string, char stop);
t_cookie_string_len	cookie_str_len_n(const char *string, t_cookie_string_len max_len);
t_cookie_string_len	cookie_str_len_stop_n(const char *string, char stop, t_cookie_string_len max_len);
t_cookie_string_len	cookie_str_r_len_stop_n(const char *string, char stop, t_cookie_string_len max_len);
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
char				*cookie_str_dup_n(const char *string, t_cookie_string_len n);
char				*cookie_str_copy(const char *src, char *dst);
char				*cookie_str_copy_n(const char *src, char *dst, t_cookie_string_len n);
char				*cookie_str_move(const char* src, char *dst);
bool				cookie_str_chr(const char *ref, const char *cmp);
bool				cookie_str_r_chr(const char *ref, const char *cmp);
char				*cookie_str_cat(char *dst, const char *src);
char				*cookie_str_cat_n(char *dst, const char *src, t_cookie_string_len n);
t_cookie_string_len	cookie_str_c_spn(const char *string, const char *reject);
t_cookie_string_len cookie_str_spn(const char *string, const char *accept);
char				*cookie_str_p_brk(const char *string, const char *accept);
char				*cookie_str_str(const char *haystack, const char *needle);

#endif