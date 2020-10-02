/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 22:34:50 by mrubio            #+#    #+#             */
/*   Updated: 2020/10/01 19:20:31 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int		ft_print_numhex(unsigned long nb)
{
	if (nb < 10)
		return (ft_putnbr(nb));
	else if (nb == 10)
		return (ft_putchar('a'));
	else if (nb == 11)
		return (ft_putchar('b'));
	else if (nb == 12)
		return (ft_putchar('c'));
	else if (nb == 13)
		return (ft_putchar('d'));
	else if (nb == 14)
		return (ft_putchar('e'));
	else if (nb == 15)
		return (ft_putchar('f'));
	return (0);
}

int		ft_putmem_hex(unsigned long n)
{
	int i;
	unsigned long bignum;

	i = 2;
	bignum = 16;
	ft_putstr("0x");
	while ((bignum * 16) < n)
		bignum *= 16;
	while (n > 16)
	{
		i += ft_print_numhex(n / bignum);
		n %= bignum;
		bignum /= 16;
	}
	i += ft_print_numhex(n);
	return (i);
}

int		ft_putmem(void *addr)
{
	return (ft_putmem_hex((unsigned long)addr));
}
