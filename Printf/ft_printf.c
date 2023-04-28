/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jael-mor <jael-mor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 01:48:23 by jael-mor          #+#    #+#             */
/*   Updated: 2023/04/28 18:52:49 by jael-mor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printarg(char flg, va_list arg, int *lenght)
{
	if (flg == 'c')
		ft_putchar(va_arg(arg, int), 1, lenght);
	else if (flg == 's')
		ft_putstr(va_arg(arg, char *), 1, lenght);
	else if (flg == 'i' || flg == 'd')
		ft_putnbr(va_arg(arg, int), 1, lenght);
	else if (flg == 'u')
		ft_putuns(va_arg(arg, unsigned int), 1, lenght);
	else if (flg == 'x')
		ft_lowerhexadecimal(va_arg(arg, unsigned int), lenght);
	else if (flg == 'X')
		ft_upperhexadecimal(va_arg(arg, unsigned int), lenght);
	else if (flg == 'p')
		ft_putptr(va_arg(arg, void *), lenght);
	else if (flg == '%')
		ft_putchar('%', 1, lenght);
	else
		ft_putchar(flg, 1, lenght);
}

int	ft_printf(char const *string, ...)
{
	va_list	arg;
	int		lenght;
	int		i;

	if (write(1, 0, 0) == -1)
		return (-1);
	lenght = 0;
	i = 0;
	va_start(arg, string);
	while (string[i])
	{
		if (string[i] == '%')
		{
			if (string[i + 1] == '\0')
				break ;
			ft_printarg(string[i + 1], arg, &lenght);
			i++;
		}
		else
			ft_putchar(string[i], 1, &lenght);
		i++;
	}
	va_end(arg);
	return (lenght);
}
