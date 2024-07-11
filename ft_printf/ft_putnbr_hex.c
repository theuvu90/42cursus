/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thivu <thivu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:48:08 by thivu             #+#    #+#             */
/*   Updated: 2024/07/11 13:06:09 by thivu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_hex(unsigned long nbr, char *base)
{
	if (nbr < 16)
	{
		if (ft_putchar(base[nbr]) == -1)
			return (-1);
		return (1);
	}
	else
	{
		if (ft_putnbr_base(nbr / 16, base) == -1)
			return (-1);
		if (ft_putchar(base[nbr % 16]) == -1)
			return (-1);
		return (1);
	}
}
/*
base = "0123456789abcdef" si queremos imprimir en minuscula
base = "0123456789ABCDEF" si queremos imprimir en mayuscula
*/