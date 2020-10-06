/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 02:43:13 by mrubio            #+#    #+#             */
/*   Updated: 2020/10/06 16:45:19 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct struct_flags
{
	int		first;
	int		alig;
	int		zero;
	int		second;
	int		f_ast;
	int		s_ast;
	int		ast;
}inf_flg;

typedef struct struct_printf
{
	int		x;
	int		ret;
}inf_pf;

unsigned int	ft_strlen(const char *str);
void			*ft_memcpy(void *dest, const void *src, unsigned int n);
char			*ft_strdup(const char *src);
int				ft_nblen(long n);
int				ft_strchr_mod(char *s, int c); //Utils

int				ft_check_arg(char *s, va_list args, inf_flg flags);
inf_pf			ft_info_flags(char *str, va_list args, inf_flg flags, inf_pf print);

int				ft_putchar(char c);

int				ft_put_flag_nbr(long n, inf_flg flags);
int				ft_putnbr(long n);

int				ft_putstr(char *s);

int				ft_putnbr_abs(long n, inf_flg flags);

int				ft_puthex(int n, int mayus);

int				ft_putmem(void *addr);

int				ft_printf(const char *str, ...);
void			ft_init_struct(inf_pf *print, inf_flg *flags);


#endif
