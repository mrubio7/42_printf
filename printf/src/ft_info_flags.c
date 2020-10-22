/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_info_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 16:14:21 by mrubio            #+#    #+#             */
/*   Updated: 2020/10/22 01:36:15 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int			ft_ret_char2int(char *str)
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

void		read_flag_ast(char *str, va_list args, inf_flg **flags)
{
	int x;

	x = 0;
	if (str[x + 1] == '.')
	{
		(*flags)->first = va_arg(args, int);
		if ((*flags)->first < 0)
		{
			(*flags)->alig = 1;
			(*flags)->first *= -1;
		}
	}
	else if (str[x - 1] == '.')
	{
		(*flags)->second = va_arg(args, int);
		if ((*flags)->second < 0)
			(*flags)->second = -1;
	}
	else
		(*flags)->ast = va_arg(args, int);
}

int			read_flag_dot(char *str, inf_flg **flags)
{
	(*flags)->second = ft_ret_char2int(str + 1);
	(*flags)->dot = 1;
	return (ft_nblen((*flags)->second));
}

int			ft_read_flags(char *str, va_list args, inf_flg *flags)
{
	int x;

	x = 0;
	while (ft_strchr("-0.*123456789", str[x]) != NULL)
	{
		if (str[x] == '0')
			flags->zero = 1;
		else if (str[x] == '-')
			flags->alig = 1;
		else if (str[x] == '*')
			read_flag_ast(str + x, args, &flags);
		else if (str[x] >= '1' && str[x] <= '9' && flags->second == -1)
		{
			flags->first = ft_ret_char2int(str + x);
			x += (ft_nblen(flags->first) - 1);
		}
		else if (str[x] == '.' && (str[x + 1] >= '0' && str[x + 1] <= '9'))
			x += read_flag_dot(str + x, &flags);
		else if (str[x] == '.' && flags->dot == 0)
			flags->second = 0;
		x++;
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
