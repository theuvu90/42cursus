/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thivu <thivu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:37:32 by thivu             #+#    #+#             */
/*   Updated: 2024/07/12 11:40:39 by thivu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_format(char format, va_list args)
{
	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'p')
		return (ft_putpoint(va_arg(args, unsigned long)));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 'u')
		return (ft_putnbr_unsig(va_arg(args, unsigned int)));
	else if (format == 'x')
		return (ft_putnbr_hex(va_arg(args, unsigned int),
				"0123456789abcdef"));
	else if (format == 'X')
		return (ft_putnbr_hex(va_arg(args, unsigned int),
				"0123456789ABCDEF"));
	else if (format == '%')
		return (ft_putchar('%'));
	return (-1);
}

int	ft_format(const char *format, va_list args, int *i)
{
	int	count;

	count = 0;
	if (*(format + *i) == '%' && *(format + *i + 1))
	{
		(*i)++;
		count = check_format(*(format + *i), args);
	}
	else if (*(format + *i) != '%')
		count = ft_putchar(*(format + *i));
	(*i)++;
	return (count);
}
