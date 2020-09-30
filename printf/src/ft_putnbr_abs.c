/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_abs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 01:22:15 by mrubio            #+#    #+#             */
/*   Updated: 2020/10/01 00:27:41 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int		ft_putnbr_abs(long n, inf_flg flags)
{
	unsigned long num;

	num = n;
	return(ft_put_flag_nbr((long)num, flags));
}
