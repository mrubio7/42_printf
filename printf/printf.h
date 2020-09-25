/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 02:43:13 by mrubio            #+#    #+#             */
/*   Updated: 2020/09/25 15:58:54 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

unsigned int	ft_strlen(const char *str);
void			*ft_memcpy(void *dest, const void *src, unsigned int n);
char			*ft_strdup(const char *src);
int				ft_check_arg(char *s, va_list args);
int				ft_putchar_fd(char c, int fd);
int				ft_putnbr_fd(int n, int fd, int z);
int				ft_putstr_fd(char *s, int fd, int z);

