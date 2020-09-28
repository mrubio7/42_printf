/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 00:06:04 by mrubio            #+#    #+#             */
/*   Updated: 2020/09/28 14:30:58 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_print_numhex_caps(int nb)
{
	if (nb < 10)
		return(ft_putnbr(nb));
	else if (nb == 10)
		return(ft_putchar('A'));
	else if (nb == 11)
		return(ft_putchar('B'));
	else if (nb == 12)
		return(ft_putchar('C'));
	else if (nb == 13)
		return(ft_putchar('D'));
	else if (nb == 14)
		return(ft_putchar('E'));
	else if (nb == 15)
		return(ft_putchar('F'));
	return (0);
}

int		ft_print_numhex_low(int nb)
{
	if (nb < 10)
		return(ft_putnbr(nb));
	else if (nb == 10)
		return(ft_putchar('a'));
	else if (nb == 11)
		return(ft_putchar('b'));
	else if (nb == 12)
		return(ft_putchar('c'));
	else if (nb == 13)
		return(ft_putchar('d'));
	else if (nb == 14)
		return(ft_putchar('e'));
	else if (nb == 15)
		return(ft_putchar('f'));
	return (0);
}

int		ft_puthex(int n, int mayus)
{
	int i;
	int bignum;

	i = 0;
	bignum = 16;
	while ((bignum * 16) < n)
		bignum *= 16;
	while (n > 16)
	{
		if (mayus == 1)
			i += ft_print_numhex_caps(n / bignum);
		else
			i += ft_print_numhex_low(n / bignum);
		n %= bignum;
		bignum /= 16;
	}
	if (mayus == 1)
		i += ft_print_numhex_caps(n);
	else
		i += ft_print_numhex_low(n);
	return (i);
}