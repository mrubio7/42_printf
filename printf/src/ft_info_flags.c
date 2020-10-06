/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_info_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 16:14:21 by mrubio            #+#    #+#             */
/*   Updated: 2020/10/06 17:20:16 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int		ft_ret_char2int(char *str)
{
	int x;
	int num;

	num = 0;
	x = 0;
	while ((str[x] >= '0' && str[x] <= '9'))
	{
		num = (num * 10) + (str[x] - '0');
		x++;
	}
	return (num);
}

int		ft_read_flags(char *str, va_list args, inf_flg *flags)
{
	int x;

	x = 0;
	while (ft_strchr_mod("-0.*123456789", str[x]) != 1)
	{
		if (str[x] == '0')
			flags->zero = 1;
		if (str[x] == '-')
			flags->alig = 1;
		if (str[x] == '*')
		{
			if (str[x + 1] == '.')
				flags->f_ast = va_arg(args, int);
			else if (str[x - 1] == '.')
				flags->s_ast = va_arg(args, int);
			else
				flags->ast = va_arg(args, int);
		}
		if (str[x] >= '1' && str[x] <= '9')
		{
			flags->first = ft_ret_char2int(str + x);
			x += (ft_nblen(flags->first));
		}
		if (str[x] == '.' && (str[x + 1] >= '0' && str[x + 1] <= '9'))
		{
			flags->second = ft_ret_char2int(str + x + 1);
			x += (ft_nblen(flags->first) + 1);
		}
		x++;
	}
	return (x);
}

inf_pf		ft_info_flags(char *str, va_list args, inf_flg flags, inf_pf print)
{
	int		z;
	int		x;

	x = ft_read_flags((char *)str, args, &flags);
	printf(">>>>>>>>>>>>>>%c", str[x]);
	z = ft_check_arg((char *)str + x, args, flags);
	print.x += x + 1;
	print.ret = z + 1;
	return (print);
}
