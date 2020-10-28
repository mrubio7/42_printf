/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 20:43:52 by mrubio            #+#    #+#             */
/*   Updated: 2020/10/28 12:23:27 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		main(void)
{
	int res;

	res = printf("%s %s", "HOLAAAAA QUE TALL ESTAS", "que pasa amigo");
	printf("\n%d\n", res);
	res = ft_printf("%s %s", "HOLAAAAA QUE TALL ESTAS", "que pasa amigo");
	ft_printf("\n%d\n", res);
}