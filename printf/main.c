/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 20:43:52 by mrubio            #+#    #+#             */
/*   Updated: 2020/09/28 13:31:14 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		main(void)
{
	int *a;
	int res;

	a = malloc(1024*1024*1024);
	res = printf("Address of a: %p\n", &a);
	printf("Printf return: %d\n", res);
	res = ft_printf("Address of a: %p\n", &a);
	ft_printf("Printf return: %d\n", res);
}