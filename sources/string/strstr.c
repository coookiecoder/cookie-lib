/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 18:50:43 by abareux           #+#    #+#             */
/*   Updated: 2025/03/19 18:50:44 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_memory.h>
#include <cookie_string.h>

char	*cookie_str_str(const char *haystack, const char *needle) {
	return (char *) cookie_mem_chr(haystack, cookie_str_len(haystack), needle, cookie_str_len(needle));
}