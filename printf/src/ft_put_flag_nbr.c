/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_flag_nbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 01:22:15 by mrubio            #+#    #+#             */
/*   Updated: 2020/10/07 20:38:19 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int		flag_alig(inf_flg flags)
{
	int x;

	x = 0;
	while (flags.first > flags.second)
	{
		x += ft_putchar(' ');
		flags.first -= 1;
	}
	flags.alig = -1;
	return (x);
}

int		flag_zero(long n, inf_flg flags)
{
	int x;

	x = 0;
	while (flags.first-- > ft_nblen(n))
		x += ft_putchar('0');
	flags.zero = -1;
	return (x);
}

int		flag_num(long n, inf_flg flags)
{
	int x;

	x = 0;
	while (flags.second-- > ft_nblen(n))
		x += ft_putchar('0');
	return (x);
}

int		flag_ast(inf_flg *flags)
{
	int x;

	x = 0;
	if (flags->ast > 0)
		flags->first = flags->ast;
	return (x);
}

int		ft_put_flag_nbr(long n, inf_flg flags)
{
	int x;

	x = 0;
	if (flags.ast > 0)
		x += flag_ast(&flags);
	flags.second = (flags.second < ft_nblen(n)) ? ft_nblen(n) : flags.second;
	if (flags.alig == 0 && flags.first > flags.second && flags.zero == 0)
		x += flag_alig(flags);
	if (flags.zero == 1)
		x += flag_zero(n, flags);
	if (flags.first > 0 && flags.second > 0)
		x += flag_num(n, flags);
	x += ft_putnbr(n);
	if (flags.alig == 1)
		x += flag_alig(flags);
	return (x);
}
