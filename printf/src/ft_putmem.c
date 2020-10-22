/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 22:34:50 by mrubio            #+#    #+#             */
/*   Updated: 2020/10/22 02:18:34 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int		ft_print_mem(long nb)
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

int		ft_putmem(long addr, inf_flg flags)
{
	int i;
	long bignum;

	i = 0;
	bignum = 16;
	i += ft_putstr("0x");
	if (addr == 0 && flags.second == 0)
		return (0);
	while ((bignum * 16) < addr)
		bignum *= 16;
	while (addr > 16)
	{
		i += ft_print_mem(addr / bignum);
		addr %= bignum;
		bignum /= 16;
	}
	i += ft_print_mem(addr);
	return (i);
}