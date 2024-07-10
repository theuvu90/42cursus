/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thivu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:35:16 by thivu             #+#    #+#             */
/*   Updated: 2024/07/10 10:35:22 by thivu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int n)
{
	unsigned int	count;

	count = 0;
	if (n < 0)
	{
		count += ft_putchar('-');
		count += ft_putnbr(-n);
	}
	if (n > 9)
	{
		count += ft_putnbr(n / 10);
		count += ft_putnbr(n % 10);
	}
	count += ft_putchar(n + '0');
	return (count);
}
