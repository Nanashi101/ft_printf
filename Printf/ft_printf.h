/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jael-mor <jael-mor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 00:40:40 by jael-mor          #+#    #+#             */
/*   Updated: 2023/04/28 18:51:27 by jael-mor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

void	ft_putchar(char c, int fd, int *lenght);
void	ft_putstr(char *s, int fd, int *lenght);
void	ft_putnbr(int n, int fd, int *lenght);
void	ft_putuns(unsigned int n, int fd, int *lenght);
void	ft_putptr(void *p, int *lenght);
void	ft_lowerhexadecimal(unsigned long int n, int *lenght);
void	ft_upperhexadecimal(unsigned long int n, int *lenght);
void	ft_printarg(char flg, va_list arg, int *lenght);
int		ft_printf(char const *string, ...);

#endif