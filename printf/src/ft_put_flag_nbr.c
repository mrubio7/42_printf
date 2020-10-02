/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_flag_nbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 01:22:15 by mrubio            #+#    #+#             */
/*   Updated: 2020/10/02 17:05:14 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int		ft_size_nbr(long n)
{
	int siz;

	siz = 0;
	while ((n / 10) > 0)
	{
		n /= 10;
		siz++;
	}
	return (siz + 1);
}

int		ft_print_zero_num(long n, inf_flg *flags)
{
	int x;
	int siz;

	x = 0;
	siz = ft_size_nbr(n);
	while (siz++ < flags->siznum)
		x += ft_putchar('0');
	x += ft_putnbr(n);
	flags->siznum = 0;
	return (x);
}

int		ft_put_flag_nbr(long n, inf_flg flags)
{
	int x;

	x = 0;
	if (flags.spc == flags.siznum)
	{
		x += ft_print_zero_num(n, &flags);
		return (x);
	}
	if (flags.spc > flags.siznum)
	{
		if (flags.alig == 1)
			x += ft_print_zero_num(n, &flags);
		while (flags.spc-- > flags.siznum)
			x += ft_putchar(' ');
		if (flags.alig == 0)
			x += ft_print_zero_num(n, &flags);
		return (x);
	}
	if (flags.siznum > flags.spc)
		x += ft_print_zero_num(n, &flags);
	x += ft_putnbr(n);
	return (x);
}