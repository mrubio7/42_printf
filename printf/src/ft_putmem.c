/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 22:34:50 by mrubio            #+#    #+#             */
/*   Updated: 2020/09/28 11:10:40 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

void	ft_print_numhex(unsigned long nb)
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

void	ft_putmem_hex(unsigned long n)
{
	unsigned long bignum;

	bignum = 16;
	ft_putstr("0x");
	while ((bignum * 16) < n)
		bignum *= 16;
	while (n > 16)
	{
		ft_print_numhex(n / bignum);
		n %= bignum;
		bignum /= 16;
	}
	ft_print_numhex(n);
}

void	ft_putmem(void *addr)
{
	ft_putmem_hex((unsigned long)addr);
}
