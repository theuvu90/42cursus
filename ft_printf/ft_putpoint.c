/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thivu <thivu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:05:54 by thivu             #+#    #+#             */
/*   Updated: 2024/07/11 10:42:40 by thivu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putpoint(unsigned long p)
{
	if (ft_putstr("0x") == -1 || ft_putnbr_base(p, "0123456789abcdef") == -1)
		return (-1);
	return (ft_putstr("0x") + ft_putnbr_base(p, "0123456789abcdef"));
}
