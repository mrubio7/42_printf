/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 20:43:52 by mrubio            #+#    #+#             */
/*   Updated: 2020/10/28 00:03:02 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		main(void)
{
	int res;

	res = printf("ultimate2 %*d %*s %*x %*X %*i %*u\n", 1, 5000, 1, "hey", 10, 50, 2, 32, 10, 55, 1, -60);
	printf("\n%d\n", res);
	res =ft_printf("ultimate2 %*d %*s %*x %*X %*i %*u\n", 1, 5000, 1, "hey", 10, 50, 2, 32, 10, 55, 1, -60);
	ft_printf("\n%d\n", res);
	res = printf("ultimate4 %*.*x %*.*X\n", 1, 50, 5000, 1, 0, 10);
	printf("\n%d\n", res);
	res = ft_printf("ultimate4 %*.*x %*.*X\n", 1, 50, 5000, 1, 0, 10);
	ft_printf("\n%d\n", res);
}
