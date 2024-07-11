/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsig.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thivu <thivu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:08:57 by thivu             #+#    #+#             */
/*   Updated: 2024/07/11 18:34:03 by thivu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_unsig(unsigned int n)
{	
	if (n > 9)
		return (ft_putnbr(n / 10) + ft_putnbr(n % 10));
	return (ft_putchar(n + '0'));
}
