/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_flag_char.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 00:41:54 by mrubio            #+#    #+#             */
/*   Updated: 2020/10/16 19:41:12 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int		flag_width_c(inf_flg flags)
{
	int x;

	x = 0;

	if (flags.zero == 1  && flags.alig == 0)
	{
		while (flags.first > 1)
		{
			x += ft_putchar('0');
			flags.first--;
		}
	}
	else
	{
		while (flags.first > 1)
		{
			x += ft_putchar(' ');
			flags.first--;
		}
	}
	return (x);
}

int		ft_put_flag_char(char c, inf_flg flags)
{
	int x;

	x = 0;
	if (flags.alig == 1)
	{
		x += ft_putchar(c);
		x += flag_width_c(flags);
	}
	else
	{
		x += flag_width_c(flags);
		x += ft_putchar(c);
	}
	return (x);
}
