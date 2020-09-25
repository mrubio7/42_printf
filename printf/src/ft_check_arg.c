/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 03:02:30 by mrubio            #+#    #+#             */
/*   Updated: 2020/09/25 03:59:19 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int		ft_check_arg(char *s, va_list args)
{
	int x;

	x = 0;
	if (s[x] == 's')
		ft_putstr_fd(va_arg(args, char*), 1);
	else if (s[x] == 'd')
		ft_putnbr_fd(va_arg(args, double), 1);
	return (x + 2);
}
// Arreglar la dovolucion de la X, para que pase la "%d, %s..."