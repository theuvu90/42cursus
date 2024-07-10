/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thivu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:04:46 by thivu             #+#    #+#             */
/*   Updated: 2024/07/10 10:05:00 by thivu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	check_format(const char *format, void *args)
{
	int	n;

	n = 0;
	if (*format == 'c')
		n += ft_putchar((char)args);
	if (*format == 's')
		n += ft_putstr((char *)args);
	if (*format == 'p')
		n += ft_putpoint((unsigned long)args);
	if (*format == 'd' || *format == 'i')
		n += ft_putnbr((int)args);
	if (*format == 'u')
		n += ft_putunsignbr((unsigned int)args);
	if (*format == 'x')
		n += ft_puthex_lower((unsigned int)args);
	if (*format == 'X')
		n += ft_puthex_upper((unsigned int)args);
	return (n);
}
