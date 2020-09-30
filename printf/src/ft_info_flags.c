/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_info_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 16:14:21 by mrubio            #+#    #+#             */
/*   Updated: 2020/09/30 17:45:11 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int		ft_ret_num(char *str, inf_flg **flags)
{
	int		x;
	char	*num;

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
	(*flags)->num_add = atoi(num);
	return (x);
}

int		ft_read_flags(char *str, va_list args, inf_flg *flags)
{
	int x;

	x = 0;
	if (str[x] == '-')
	{
		flags->alig = 1;
		x++;
	}
	else if (str[x] == '0')
	{
		flags->zero = 1;
		x++;
	}
	if (str[x] == '*')
	{
		flags->num_add = va_arg(args, int);
		x++;
	}
	else if ((str[x] >= '1' && str[x] <= '9') || str[x] == '-')
	{
		x += ft_ret_num((char *)str + x, &flags);
	}
	return (x);
}

inf_pf	ft_info_flags(char *str, va_list args, inf_flg flags, inf_pf print)
{
	int		z;
	int		x;

	x = 0;
	z = 0;
	flags.alig = 0;
	flags.num_add = 0;
	flags.zero = 0;
	x = ft_read_flags((char *)str, args, &flags);
	z += ft_check_arg((char *)str + x, args, flags);
	print.x += x + 1;
	print.ret = z;
	return (print);
}
