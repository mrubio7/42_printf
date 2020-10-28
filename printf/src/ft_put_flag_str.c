/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_flag_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 13:00:55 by mrubio            #+#    #+#             */
/*   Updated: 2020/10/28 17:16:17 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int		flag_width_str(char *s, t_flg flags)
{
	int		x;

	x = 0;
	if (flags.zero == 1 && flags.alig == 0)
		while (flags.first-- > (int)ft_strlen(s))
			x += ft_putchar('0');
	else
		while (flags.first-- > (int)ft_strlen(s))
			x += ft_putchar(' ');
	return (x);
}

char	*flag_prec_str(char *str, t_flg flags)
{
	int		x;
	char	*new;

	x = 0;
	if (!str)
		str = "(null)";
	if ((new = malloc(ft_strlen(str))) == NULL)
		return (0);
	if (flags.second == -1)
		ft_memcpy(new, str, ft_strlen(str));
	else
	{
		while (x < flags.second)
		{
			new[x] = str[x];
			x++;
		}
		new[x] = '\0';
	}
	return (new);
}

int		ft_put_flag_str(char *s, t_flg flags)
{
	int		x;
	char	*new;

	x = 0;
	new = flag_prec_str(s, flags);
	if (flags.alig == 1)
	{
		x += ft_putstr(new);
		x += flag_width_str(new, flags);
	}
	else
	{
		x += flag_width_str(new, flags);
		x += ft_putstr(new);
	}
	free(new);
	return (x);
}
