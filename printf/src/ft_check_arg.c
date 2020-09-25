/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 03:02:30 by mrubio            #+#    #+#             */
/*   Updated: 2020/09/25 18:31:04 by mrubio           ###   ########.fr       */
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
	else if (s[z] == '%')
		ft_putchar('%');
	
}