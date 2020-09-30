/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 20:43:52 by mrubio            #+#    #+#             */
/*   Updated: 2020/09/30 18:02:13 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		main(void)
{
	int a;
	int res;
	int ress;

	a = 42;
	res = printf("%05dWWW\n", a);
	printf("%d\n", res);
	ress = ft_printf("%05dWWW\n", a);
	ft_printf("%d\n", ress);
}