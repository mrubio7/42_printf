/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 20:43:52 by mrubio            #+#    #+#             */
/*   Updated: 2020/10/09 13:12:16 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		main(void)
{
	int a;
	int res;

	a = -14;
	res = printf("|%7d|\n", a);
	printf("%d\n", res);
	res = ft_printf("|%7d|\n", a);
	ft_printf("%d\n", res);
}
