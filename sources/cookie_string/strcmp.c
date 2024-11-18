/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <abareux@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:44:29 by abareux           #+#    #+#             */
/*   Updated: 2024/11/11 16:44:34 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_string.h>

bool	cookie_string_str_cmp(const t_cookie_string ref, const t_cookie_string cmp)
{
	return cookie_str_cmp(ref.string, cmp.string);
}

bool	cookie_string_str_cmp_n(const t_cookie_string ref, const t_cookie_string cmp, const t_cookie_string_len n)
{
	return cookie_str_cmp_n(ref.string, cmp.string, n);
}