/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thivu <thivu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 09:48:13 by thivu             #+#    #+#             */
/*   Updated: 2024/07/09 14:45:40 by thivu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int n)
{
	unsigned int	cont;

	cont = 0;
	if (n < 0)
	{
		cont += ft_putchar('-');
		cont += ft_putnbr(-n);
	}
	if (n > 9)
	{
		cont += ft_putnbr(n / 10);
		cont += ft_putnbr(n % 10);
	}
	cont += ft_putchar(n + '0');	
	
	return (cont);
}
