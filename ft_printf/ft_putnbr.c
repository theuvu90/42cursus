/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thivu <thivu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:35:16 by thivu             #+#    #+#             */
/*   Updated: 2024/07/11 17:47:32 by thivu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int n)
{
	if (n < 0)
		return (ft_putchar('-') + ft_putnbr(-n));
	if (n > 9)
		return (ft_putnbr(n / 10) + ft_putnbr(n % 10));
	return (ft_putchar(n + '0'));
}
