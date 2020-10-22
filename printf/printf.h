/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 02:43:13 by mrubio            #+#    #+#             */
/*   Updated: 2020/10/22 16:15:53 by mrubio           ###   ########.fr       */
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
	int		minus;
	int		dot;
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
char			*ft_strchr(char *s, int c);

int				ft_check_arg(char *s, va_list args, inf_flg flags);
inf_pf			ft_info_flags(char *str, va_list args, inf_flg flags, inf_pf print);
long			ft_abs(long n);

int				ft_put_flag_char(char c, inf_flg flags);
int				ft_putchar(char c);

int				ft_put_flag_nbr(long n, inf_flg flags);
int				ft_putnbr(long n);

int				ft_put_flag_str(char *s, inf_flg flags);
int				ft_putstr(char *s);

int				ft_putnbr_abs(long n, inf_flg flags);

int				ft_put_flag_hex(long n, int mayus, inf_flg flags);
int				ft_puthex(long n, int mayus, inf_flg flags);

int				ft_put_flag_mem(unsigned long addr, inf_flg flags);
int				ft_putmem(long addr, inf_flg flags);

int				ft_printf(const char *str, ...);
void			ft_init_struct(inf_pf *print, inf_flg *flags);


#endif
