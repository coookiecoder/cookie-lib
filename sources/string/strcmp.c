/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <abareux@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:15:19 by abareux           #+#    #+#             */
/*   Updated: 2024/11/08 18:05:58 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_string.h>

bool	cookie_str_cmp(const char *ref, const char *cmp)
{
	while (*ref && *cmp)
		if (*ref++ != *cmp++)
			return true;
	return *ref != *cmp;
}

bool	cookie_str_cmp_n(const char *ref, const char *cmp, const t_cookie_string_len n)
{
	const char	*start;

	start = ref;
	while (*ref && *cmp && (t_cookie_string_len)(ref - start) < n)
		if (*ref++ != *cmp++)
			return COOKIE_STRCMP_NOT_EQUAL;
	if ((t_cookie_string_len)(ref - start) != n)
		return *ref != *cmp;
	return COOKIE_STRCMP_EQUAL;
}
