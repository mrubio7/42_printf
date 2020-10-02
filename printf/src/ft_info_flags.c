/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_info_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 16:14:21 by mrubio            #+#    #+#             */
/*   Updated: 2020/10/02 17:07:11 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int		ft_num2str(char *str)
{
	int x;
	char *num;
	
	x = 0;
	while (str[x] >= '0' && str[x] <= '9')
		x++;
	num = malloc(x + 1);
	x = 0;
	while (str[x] >= '0' && str[x] <= '9')
	{
		num[x] = str[x];
		x++;
	}
	num[x] = '\0';

	return (atoi(num));
}

int		ft_nblen(long n)
{
	int size;

	size = 0;
	while ((n /= 10) != 0)
		size++;
	return (size);
}

int		ft_read_flags(char *str, va_list args, inf_flg *flags)
{
	int x;
	char *num;

	x = 0;
	while (str[x] != ('s' | 'c' | 'd' | 'i' | 'u' | 'x' | 'X' | 'p' | '%'))
	{
		if (str[x] == '-')
			flags->alig = 1;
		if (str[x] == '0')
			flags->zero = 1;
		if (str[x] == '*')
			flags->spc = va_arg(args, int);
		if (str[x] >= '1' && str[x] <= '9')
		{
			flags->spc = ft_num2str(str + x);
			x += ft_nblen(flags->spc);
		}
		if (str[x] == '.')
		{
			flags->siznum = ft_num2str(str + x + 1);
			x += (ft_nblen(flags->spc) + 1);
		}
	}
	return (x);
}

inf_pf		ft_info_flags(char *str, va_list args, inf_flg flags, inf_pf print)
{
	int		z;
	int		x;

	x = ft_read_flags((char *)str, args, &flags);
	z = ft_check_arg((char *)str + x, args, flags);
	print.x += x + 1;
	print.ret = z;
	return (print);
}
