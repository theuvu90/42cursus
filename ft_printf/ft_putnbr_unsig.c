/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsig.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thivu <thivu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:08:57 by thivu             #+#    #+#             */
/*   Updated: 2024/07/12 09:43:44 by thivu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsig(unsigned int n)
{
	return (ft_putnbr(n / 10) + ft_putnbr(n % 10));
}
/*
ft_putnbr para numero tipo int, valor de -2147483648 a 2147483647
ft_putnbr_unsig para numero tipo unsigned int, valor de 0 a 4294967295
*/
