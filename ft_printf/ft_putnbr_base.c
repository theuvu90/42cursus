/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thivu <thivu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:48:08 by thivu             #+#    #+#             */
/*   Updated: 2024/07/10 12:18:09 by thivu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_base(unsigned long nbr, char *base, int result)
{
	unsigned long	len;

	len = 0;
	while (base[len])
		len++;
	if (nbr < len)
	{
		if (ft_putchar(base[nbr] == -1))
			return (-1);
		return (result + 1);
	}
	else
	{
		result = ft_putnbr_base(nbr / len, base, result);
		if (result == -1)
			return (-1);
		if (ft_putchar(base[nbr % len]) == -1)
			return (-1);
		return (result + 1);
	}
}