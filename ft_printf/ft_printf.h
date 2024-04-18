/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:12:11 by lmedrano          #+#    #+#             */
/*   Updated: 2023/07/20 08:53:34 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

int		ft_check_fmt(char format, va_list ap);
int		ft_printf(const char *format, ...);
int		ft_printchar(char c);
void	ft_putletter(char c);
void	ft_putstr(char *str);
int		ft_printstr(char *str);
int		ft_strlen(int n);
int		ft_printnbr(int n);
int		ft_isspace(char c);
int		ft_hexlen(unsigned int hex);
void	ft_puthex(unsigned int hex, char format);
int		ft_printhex(unsigned int hex, char format);
int		ft_ptrlen(uintptr_t ptr);
int		ft_printptr(unsigned long long ptr);
int		ft_uintlen(unsigned int n);
char	*ft_uint_itoa(unsigned int n);
int		ft_printuint(unsigned int n);

#endif
