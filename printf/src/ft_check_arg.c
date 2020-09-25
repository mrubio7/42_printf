/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 03:02:30 by mrubio            #+#    #+#             */
/*   Updated: 2020/09/25 16:06:03 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int		ft_check_arg(char *s, va_list args)
{
	int z;

	z = 0;
	if (s[z] == 'c')
		z += ft_putchar_fd(va_arg(args, int), 1);
	/*else if (s[z] == 's')
		z = ft_putstr_fd(va_arg(args, char*), 1, z);
	else if (s[z] == 'd' || s[z] == 'i')
		z = ft_putnbr_fd(va_arg(args, int), 1, z);*/
	return (z+1);
}