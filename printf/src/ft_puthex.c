/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 00:06:04 by mrubio            #+#    #+#             */
/*   Updated: 2020/09/26 01:52:47 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_print_numhex_caps(int nb)
{
	if (nb < 10)
		ft_putnbr(nb);
	else if (nb == 10)
		ft_putchar('A');
	else if (nb == 11)
		ft_putchar('B');
	else if (nb == 12)
		ft_putchar('C');
	else if (nb == 13)
		ft_putchar('D');
	else if (nb == 14)
		ft_putchar('E');
	else if (nb == 15)
		ft_putchar('F');
}

void	ft_print_numhex_low(int nb)
{
	if (nb < 10)
		ft_putnbr(nb);
	else if (nb == 10)
		ft_putchar('a');
	else if (nb == 11)
		ft_putchar('b');
	else if (nb == 12)
		ft_putchar('c');
	else if (nb == 13)
		ft_putchar('d');
	else if (nb == 14)
		ft_putchar('e');
	else if (nb == 15)
		ft_putchar('f');
}

void	ft_puthex(int n, int mayus)
{
	int bignum;

	bignum = 16;
	while ((bignum * 16) < n)
		bignum *= 16;
	while (n > 16)
	{
		if (mayus == 1)
			ft_print_numhex_caps(n / bignum);
		else
			ft_print_numhex_low(n / bignum);
		n %= bignum;
		bignum /= 16;
	}
	if (mayus == 1)
		ft_print_numhex_caps(n);
	else
		ft_print_numhex_low(n);
}