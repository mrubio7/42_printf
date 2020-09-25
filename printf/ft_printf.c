/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 19:43:04 by mrubio            #+#    #+#             */
/*   Updated: 2020/09/25 17:16:37 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_printf(const char *str, ...)
{
	int x;
	va_list args;

	x = 0;
	va_start(args, str);
	while (str[x])
	{
		if (str[x] == '%')
		{
			ft_check_arg((char *)str + x + 1, args);
			x++;
		}
		else
			ft_putchar_fd(str[x], 1);
		x++;
	}
	return (0);
}

int		main(void)
{
	char *s;

	s = ft_strdup("Madrid");
	ft_printf("Hello %i%s", 42, s);
}