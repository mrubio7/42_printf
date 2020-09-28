/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 01:22:15 by mrubio            #+#    #+#             */
/*   Updated: 2020/09/28 14:22:02 by mrubio           ###   ########.fr       */
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
