/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 01:22:15 by mrubio            #+#    #+#             */
/*   Updated: 2020/09/25 15:28:20 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int		ft_putnbr_fd(int n, int fd, int z)
{
	if (n < 0)
	{
		z = ft_putchar_fd('-', fd, z);
		if (n <= -10)
			z = ft_putnbr_fd(n / -10, fd, z);
		z = ft_putchar_fd(-(n % 10) + 48, fd, z);
	}
	else if (n > 9)
	{
		z = ft_putnbr_fd(n / 10, fd, z);
		z = ft_putchar_fd((n % 10) + 48, fd, z);
	}
	else
		z = ft_putchar_fd((n % 10) + 48, fd, z);
	return (z);
}
