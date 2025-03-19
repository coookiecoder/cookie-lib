/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 18:24:13 by abareux           #+#    #+#             */
/*   Updated: 2025/03/19 18:24:14 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_string.h>

char	*cookie_str_cat(char *dst, const char *src) {
	while (*dst)
		dst++;

	while (*src)
		*dst++ = *src++;

	*dst = '\0';

	return dst;
}

char	*cookie_str_cat_n(char *dst, const char *src, t_cookie_string_len n) {
	const char	*stop = src + n;

	while (*dst)
		dst++;

	while (*src && src != stop)
		*dst++ = *src++;

	*dst = '\0';

	return dst;
}