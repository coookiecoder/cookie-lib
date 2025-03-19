/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <abareux@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:17:24 by abareux           #+#    #+#             */
/*   Updated: 2024/11/18 17:17:30 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_memory.h>

bool	cookie_str_chr(const char *ref, const char *cmp) {
	return cookie_mem_chr(ref, cookie_str_len(ref) + 1, cmp, cookie_str_len(cmp) + 1);
}

bool	cookie_str_r_chr(const char *ref, const char *cmp) {
	return cookie_mem_r_chr(ref, cookie_str_len(ref) + 1, cmp, cookie_str_len(cmp) + 1);
}