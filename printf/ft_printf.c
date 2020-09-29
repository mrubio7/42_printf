/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 19:43:04 by mrubio            #+#    #+#             */
/*   Updated: 2020/09/29 22:33:48 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_printf(const char *str, ...)
{
	va_list args;
	inf_pf *print;
	inf_flg *flags;

	print = malloc(sizeof(print));
	flags = malloc(sizeof(flags));
	va_start(args, str);
	while (str[print->x])
	{
		if (str[print->x] == '%')
		{
			*print = ft_info_flags((char *)str + print->x + 1, args, *flags, *print);
		}
		else
			print->ret += ft_putchar(str[print->x]);
		print->x++;
	}
	free(flags);
	return (print->ret);
}
