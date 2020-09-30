/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 03:02:30 by mrubio            #+#    #+#             */
/*   Updated: 2020/09/30 22:47:00 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int		ft_check_arg(char *s, va_list args, inf_flg flags)
{
	int z;
	int r;

	r = 0;
	z = 0;
	if (s[z] == 'c')
		r += ft_putchar(va_arg(args, int));
	else if (s[z] == 's')
		r += ft_putstr(va_arg(args, char*));
	else if (s[z] == 'd' || s[z] == 'i')
		r += ft_put_flag_nbr(va_arg(args, int), flags);
	else if (s[z] == 'u')
		r += ft_putnbr_abs(va_arg(args, int), flags);
	else if (s[z] == 'x')
		r += ft_puthex(va_arg(args, int), 0);
	else if (s[z] == 'X')
		r += ft_puthex(va_arg(args, int), 1);
	else if (s[z] == '%')
		r += ft_putchar('%');
	else if (s[z] == 'p')
		r += ft_putmem((void *)va_arg(args, unsigned long));
	return (r);
}
