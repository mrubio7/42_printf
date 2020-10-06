/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_flag_nbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 01:22:15 by mrubio            #+#    #+#             */
/*   Updated: 2020/10/06 16:50:02 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int		flag_num(long n, inf_flg flags)
{
	int x;

	x = 0;
	while (flags.first-- > ft_nblen(n))
		x += ft_putchar(' ');
	flags.first = 0;
	flags.second = 0;
	return (x);
}

int		ft_put_flag_nbr(long n, inf_flg flags)
{
	int x;

	x = 0;
	if (flags.first > 0 || flags.second > 0)
		return (flag_num(n, flags));
	if (flags.first == 0 && flags.second == 0)
		x += ft_putnbr(n);
	return (x);
}
