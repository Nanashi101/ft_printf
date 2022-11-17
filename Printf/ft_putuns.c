/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jael-mor <jael-mor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 02:09:44 by jael-mor          #+#    #+#             */
/*   Updated: 2022/11/17 04:14:01 by jael-mor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuns(unsigned int n, int fd, int *freturn)
{
	char	c;

	if (n >= 0 && n <= 9 && *freturn > -1)
	{
		c = n + 48;
		write (fd, &c, 1);
		*freturn += 1;
	}
	else if (n > 0)
	{
		ft_putnbr(n / 10, fd, freturn);
		ft_putnbr(n % 10, fd, freturn);
	}
}
