/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 03:02:30 by mrubio            #+#    #+#             */
/*   Updated: 2020/09/28 00:59:40 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

void	ft_check_arg(char *s, va_list args)
{
	int z;

	z = 0;
	if (s[z] == 'c')
		ft_putchar(va_arg(args, int));
	else if (s[z] == 's')
		ft_putstr(va_arg(args, char*));
	else if (s[z] == 'd' || s[z] == 'i')
		ft_putnbr(va_arg(args, int));
	else if (s[z] == 'u')
		ft_putnbr_abs(va_arg(args, int));
	else if (s[z] == 'x')
		ft_puthex(va_arg(args, int), 0);
	else if (s[z] == 'X')
		ft_puthex(va_arg(args, int), 1);
	else if (s[z] == '%')
		ft_putchar('%');
	else if (s[z] == 'p')
		ft_putmem((void *)va_arg(args, long));
}