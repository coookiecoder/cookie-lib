/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:10:49 by abareux           #+#    #+#             */
/*   Updated: 2025/03/19 16:10:52 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_memory.h>
#include <cookie_string.h>

char	*cookie_str_join(char *src1, char *src2) {
	char	*result = malloc(cookie_str_len(src1) + cookie_str_len(src2) + 1);

	if (result == NULL)
		return NULL;
	cookie_mem_copy(result, src1, cookie_str_len(src1));
	cookie_mem_copy(result + cookie_str_len(src1), src2, cookie_str_len(src2));
	return result;
}
