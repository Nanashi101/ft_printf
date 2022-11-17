/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jael-mor <jael-mor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 00:44:31 by jael-mor          #+#    #+#             */
/*   Updated: 2022/11/17 04:03:53 by jael-mor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int fd, int *freturn)
{
	int	i;

	i = 0;
	if (!s)
	{
		ft_putstr("(null)", 1, freturn);
		return ;
	}
	while (s[i] && *freturn > -1)
	{
		write(fd, &s[i], 1);
		*freturn += 1;
		i++;
	}	
}
