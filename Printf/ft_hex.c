/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jael-mor <jael-mor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 02:29:57 by jael-mor          #+#    #+#             */
/*   Updated: 2023/04/28 18:49:24 by jael-mor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_lowerhexadecimal(unsigned long int n, int *lenght)
{
	if (n <= 15)
	{
		ft_putchar("0123456789abcdef"[n], 1, lenght);
	}
	else if (n > 15)
	{
		ft_lowerhexadecimal(n / 16, lenght);
		ft_lowerhexadecimal(n % 16, lenght);
	}
}

void	ft_upperhexadecimal(unsigned long int n, int *lenght)
{
	if (n <= 15)
	{
		ft_putchar("0123456789ABCDEF"[n], 1, lenght);
	}
	else if (n > 15)
	{
		ft_upperhexadecimal(n / 16, lenght);
		ft_upperhexadecimal(n % 16, lenght);
	}
}
