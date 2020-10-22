/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 00:06:04 by mrubio            #+#    #+#             */
/*   Updated: 2020/10/21 14:33:04 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int		ft_print_numhex(long nb, int mayus)
{
	if (nb < 10)
		return(ft_putnbr(nb));
	else if (nb == 10)
		return(ft_putchar('a' - mayus));
	else if (nb == 11)
		return(ft_putchar('b' - mayus));
	else if (nb == 12)
		return(ft_putchar('c' - mayus));
	else if (nb == 13)
		return(ft_putchar('d' - mayus));
	else if (nb == 14)
		return(ft_putchar('e' - mayus));
	else if (nb == 15)
		return(ft_putchar('f' - mayus));
	return (0);
}

int		ft_puthex(long n, int mayus, inf_flg flags)
{
	int i;
	long bignum;

	i = 0;
	bignum = 16;
	if (n == 0 && flags.second == 0)
		return (0);
	while ((bignum * 16) < n)
		bignum *= 16;
	while (n > 16)
	{
		i += ft_print_numhex(n / bignum, mayus);
		n %= bignum;
		bignum /= 16;
	}
	i += ft_print_numhex(n, mayus);
	return (i);
}
