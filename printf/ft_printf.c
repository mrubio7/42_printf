/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 19:43:04 by mrubio            #+#    #+#             */
/*   Updated: 2020/09/28 14:32:12 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_printf(const char *str, ...)
{
	int x;
	int z;
	va_list args;

	z = 0;
	x = 0;
	va_start(args, str);
	while (str[x])
	{
		if (str[x] == '%')
		{
			z += ft_check_arg((char *)str + x + 1, args);
			x++;
		}
		else
			z += ft_putchar(str[x]);
		x++;
	}
	return (z);
}
