/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_flag_nbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 01:22:15 by mrubio            #+#    #+#             */
/*   Updated: 2020/09/30 01:23:26 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int		ft_putnbr(long n)
{
	int x;

	x = 0;
	if (n < 0)
	{
		x += ft_putchar('-');
		if (n <= -10)
			x += ft_putnbr(n / -10);
		x += ft_putchar(-(n % 10) + 48);
	}
	else if (n > 9)
	{
		x += ft_putnbr(n / 10);
		x += ft_putchar((n % 10) + 48);
	}
	else
		x += ft_putchar((n % 10) + 48);
	return (x);
}

int		ft_count_nbr(long n)
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

int		ft_put_flag_nbr(long n, inf_flg flags)
{
	int x;
	int siz;

	x = 0;
	if (flags.alig == 1)
		x += ft_putnbr(n);
	siz = ft_count_nbr(n);
	flags.num_add -= siz;
	while (flags.num_add)
	{
		write(1, " ", 1);
		flags.num_add--;
		x++;
	}
	if (flags.alig == 0)
		x += ft_putnbr(n);
	return (x);
}