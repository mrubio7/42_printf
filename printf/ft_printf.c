/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 19:43:04 by mrubio            #+#    #+#             */
/*   Updated: 2020/10/26 11:24:46 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_init_struct(inf_pf *print, inf_flg *flags)
{
	print->ret = 0;
	print->x = 0;
	print->none = 0;
	flags->alig = 0;
	flags->first = 0;
	flags->second = -1;
	flags->zero = 0;
	flags->f_ast = 0;
	flags->s_ast = 0;
	flags->ast = 0;
	flags->minus = 0;
	flags->dot = 0;
}

int		ft_printf(const char *str, ...)
{
	va_list		args;
	inf_pf		print;
	inf_flg		flags;
	int			retur;

	retur = 0;
	ft_init_struct(&print, &flags);
	va_start(args, str);
	while (str[print.x])
	{
		if (str[print.x] == '%')
		{
			print = ft_info_flags((char *)str + print.x + 1, args, flags, print);
			retur += print.ret;
		}
		else
			retur += ft_putchar(str[print.x]);
		print.x++;
	}
	return (retur);
}
