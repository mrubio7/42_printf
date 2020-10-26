/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 20:43:52 by mrubio            #+#    #+#             */
/*   Updated: 2020/10/26 16:35:23 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		main(void)
{
	int res;

	res = printf("|%*.*d|", -1586, 15, 300);
	printf("\n%d\n", res);
	res = ft_printf("|%*.*d|", -1586, 15, 300);
	ft_printf("\n%d\n", res);
}
