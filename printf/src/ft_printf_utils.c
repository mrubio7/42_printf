/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 02:45:47 by mrubio            #+#    #+#             */
/*   Updated: 2020/10/23 19:18:36 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

unsigned int	ft_strlen(const char *str)
{
	int x;

	x = 0;
	while (*str != '\0')
	{
		x++;
		str++;
	}
	return (x);
}

void			*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	char		*s;
	char		*d;

	if (!dest && !src)
		return (NULL);
	s = (char *)src;
	d = dest;
	while (n--)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dest);
}

char			*ft_strdup(const char *src)
{
	char	*s;
	int		x;

	x = ft_strlen(src) + 1;
	if ((s = malloc(x)) == NULL)
		return (NULL);
	if (src == NULL)
	{
		free(s);
		return (NULL);
	}
	ft_memcpy(s, src, x);
	return (s);
}

char		*ft_strchr(char *s, int c)
{
	int x;

	x = 0;
	while (s[x])
	{
		if (s[x] == c)
			return (s + x);
		x++;
	}
	if (!c && s[x] == '\0')
		return (s + x);
	return (NULL);
}

int			ft_nblen(long n)
{
	int size;

	size = 0;
	if (n == 0)
		size++;
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}
