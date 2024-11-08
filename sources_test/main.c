/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abareux <abareux@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:13:07 by abareux           #+#    #+#             */
/*   Updated: 2024/11/05 13:44:31 by abareux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	main(void)
{
	if (test_putchar())
		return (1);
	if (test_putstr())
		return (1);
	if (test_strlen())
		return (1);
    if (test_strcmp())
      	return (1);
}
