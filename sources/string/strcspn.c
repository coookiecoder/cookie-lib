/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcspn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 18:29:30 by abareux           #+#    #+#             */
/*   Updated: 2025/03/19 18:29:32 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cookie_string.h>

t_cookie_string_len	cookie_str_c_spn(const char *string, const char *reject) {
	const char	*reject_buffer = reject;
	const char	*string_buffer = string;

	while (*string) {
		while (*string != *reject_buffer)
			reject_buffer++;

		if (*string == *reject_buffer)
			return string_buffer - string;

		reject_buffer = reject;
		string++;
	}
	return 0;
}

t_cookie_string_len	cookie_str_spn(const char *string, const char *accept) {
	const char	*accept_buffer = accept;
	const char	*string_buffer = string;

	while (*string) {
		while (*string != *accept_buffer)
			accept_buffer++;

		if (*string != *accept_buffer)
			return string_buffer - string;

		accept_buffer = accept;
		string++;
	}
	return 0;
}

