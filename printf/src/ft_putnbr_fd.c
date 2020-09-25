/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 01:22:15 by mrubio            #+#    #+#             */
/*   Updated: 2020/09/25 10:09:50 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int		ft_putnbr_fd(int n, int fd, int x)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd, x);
		if (n <= -10)
			ft_putnbr_fd(n / -10, fd, x);
		ft_putchar_fd(-(n % 10) + 48, fd, x);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd, x);
		ft_putchar_fd((n % 10) + 48, fd, x);
	}
	else
		ft_putchar_fd((n % 10) + 48, fd, x);
	return (x);
}
