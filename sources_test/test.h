/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <abareux@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:25:51 by abareux           #+#    #+#             */
/*   Updated: 2024/11/08 17:35:16 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include <cookie_string.h>

int		print_error(void);
void	print_succes(void);
void	print_test(const char *test_name);

int		test_putchar(void);
int		test_putstr(void);
int		test_strlen(void);
int		test_strcmp(void);
int		test_strdup(void);

int		test_converter(void);

int		test_calloc(void);
int		test_memchr(void);
int		test_memcmp(void);
int		test_memset(void);

#endif
