/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strpbrk.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 18:42:55 by abareux           #+#    #+#             */
/*   Updated: 2025/03/19 18:42:56 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_string.h>

char	*cookie_str_p_brk(const char *s, const char *accept) {
	char	*result = (char *) s;

	result += cookie_str_c_spn(s, accept);

	return result;
}

#include <string.h>