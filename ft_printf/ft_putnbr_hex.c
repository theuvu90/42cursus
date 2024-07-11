/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thivu <thivu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:48:08 by thivu             #+#    #+#             */
/*   Updated: 2024/07/11 20:09:42 by thivu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_hex(unsigned long nbr, char *base)
{
	if (nbr < 16)
		return (ft_putchar(base[nbr]));
	else
		return (ft_putnbr_hex(nbr / 16, base) + ft_putchar(base[nbr % 16]));
}
/*
base = "0123456789abcdef" si queremos imprimir en minuscula
base = "0123456789ABCDEF" si queremos imprimir en mayuscula
*/