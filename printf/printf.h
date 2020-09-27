/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 02:43:13 by mrubio            #+#    #+#             */
/*   Updated: 2020/09/28 00:59:46 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

unsigned int	ft_strlen(const char *str);
void			*ft_memcpy(void *dest, const void *src, unsigned int n);
char			*ft_strdup(const char *src);
void			ft_check_arg(char *s, va_list args);
void			ft_putchar(char c);
void			ft_putnbr(long n);
void			ft_putstr(char *s);
void			ft_putnbr_abs(int n);
void			ft_puthex(int n, int mayus);
void			ft_putmem(void *addr);
int				ft_printf(const char *str, ...);
