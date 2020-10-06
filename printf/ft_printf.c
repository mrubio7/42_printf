/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 19:43:04 by mrubio            #+#    #+#             */
/*   Updated: 2020/10/06 01:05:35 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_init_struct(inf_pf *print, inf_flg *flags)
{
	print->ret = 0;
	print->x = 0;
	flags->alig = 0;
	flags->first = 0;
	flags->second = 0;
	flags->zero = 0;
	flags->f_ast = 0;
	flags->s_ast = 0;
	flags->ast = 0;
}

int		ft_printf(const char *str, ...)
{
	va_list args;
	inf_pf print;
	inf_flg flags;
	int retur;

	ft_init_struct(&print, &flags);
	va_start(args, str);
	while (str[print.x])
	{
		if (str[print.x] == '%')
			print = ft_info_flags((char *)str + print.x + 1, args, flags, print);
		else
			print.ret += ft_putchar(str[print.x]);
		print.x++;
	}
	retur = print.ret;
	return (retur);
}
