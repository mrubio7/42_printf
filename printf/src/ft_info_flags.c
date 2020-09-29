/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_info_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 16:14:21 by mrubio            #+#    #+#             */
/*   Updated: 2020/09/30 01:34:31 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int		ft_ret_num(char *str, inf_flg *flags)
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
	flags->num_add = atoi(num);
	return (x);
}

inf_pf	ft_info_flags(char *str, va_list args, inf_flg flags, inf_pf print)
{
	int		z;
	int		x;

	x = 0;
	z = 0;
	if (str[x] == '-')
	{
		flags.alig = 1;
		x++;
	}
	if (str[x] == '*')
	{
		flags.num_add = va_arg(args, int);
		x++;
	}
	else if ((str[x] >= '1' && str[x] <= '9') || str[x] == '-')
	{
		x += ft_ret_num((char *)str + x, &flags);
		z += flags.num_add;
	}
	z += ft_check_arg((char *)str + x, args, flags);
	print.x += x + 1;
	print.ret = z;
	return (print);
}
