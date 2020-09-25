/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 03:02:30 by mrubio            #+#    #+#             */
/*   Updated: 2020/09/25 10:08:26 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int		ft_check_arg(char *s, va_list args, int x)
{
	if (s[x] == 'c')
		ft_putchar_fd(va_arg(args, int), 1, x);
	else if (s[x] == 's')
		ft_putstr_fd(va_arg(args, char*), 1, x);
	else if (s[x] == 'd' || s[x] == 'i')
		ft_putnbr_fd(va_arg(args, int), 1, x);
	return (x + 2);
}
// Arreglar la dovolucion de la X, para que pase la "%d, %s..."