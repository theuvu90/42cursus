/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thivu <thivu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:06:36 by thivu             #+#    #+#             */
/*   Updated: 2024/07/10 14:20:07 by thivu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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
		return (ft_putunsignbr(va_arg(args, unsigned int)));
	else if (format == 'x')
		return (ft_putnbr_base(va_arg(args, unsigned int),
					"0123456789abcdef"));
	else if (format == 'X')
		return (ft_putnbr_base(va_arg(args, unsigned int),
					"0123456789ABCDEF"));
	else if (format == '%')
		return (ft_putchar('%'));
	return (-1);
}

int	ft_printf(char const *format, ...)
{
	var_list		args;
	unsigned int	count;

	count = 0;
	va_start (args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (ft_strchr("cspdiuxX", *format))
				count += check_format(*format, args);
			else if (*format == '%')
				count += ft_putchar('%');
		}
		else
			count += ft_putchar(*format);
		format++;
	}
	return (count);
}
