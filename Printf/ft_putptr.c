/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jael-mor <jael-mor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 02:36:43 by jael-mor          #+#    #+#             */
/*   Updated: 2023/04/28 18:49:11 by jael-mor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(void *p, int *freturn)
{
	ft_putstr("0x", 1, freturn);
	ft_lowerhexadecimal((unsigned long int)p, freturn);
}
