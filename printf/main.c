/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 20:43:52 by mrubio            #+#    #+#             */
/*   Updated: 2020/10/28 17:58:55 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		main(void)
{
	int res;

	res = printf("this %s is %s", "hello", "");
	printf("\n%d\n", res);
	res = ft_printf("this %s is %s", "hello", "");
	ft_printf("\n%d\n", res);
}