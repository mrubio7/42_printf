/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 03:02:30 by mrubio            #+#    #+#             */
/*   Updated: 2020/09/25 17:16:03 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

void	ft_check_arg(char *s, va_list args)
{
	int z;

	z = 0;
	if (s[z] == 'c')
		ft_putchar_fd(va_arg(args, int), 1);
	else if (s[z] == 's')
		ft_putstr_fd(va_arg(args, char*), 1);
	else if (s[z] == 'd' || s[z] == 'i')
		ft_putnbr_fd(va_arg(args, int), 1);
	else if (s[z] == '%')
		ft_putchar_fd('%', 1);
}