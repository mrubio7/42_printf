/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 01:15:47 by mrubio            #+#    #+#             */
/*   Updated: 2020/09/28 14:22:59 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int		ft_putstr(char *s)
{
	int x;

	x = 0;
	while (*s != '\0')
	{
		write(1, &*s, 1);
		s++;
		x++;
	}
	return (x);
}