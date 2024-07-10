/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thivu <thivu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:06:36 by thivu             #+#    #+#             */
/*   Updated: 2024/07/10 12:55:35 by thivu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	check_format(char format, va_list args)
{
	if (format == 'c')
		return (ft_putchar(var_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(var_arg(args, char *)));
	else if (format == 'p')
		return (ft_putpoint(var_arg(args, unsigned long)));
	else if (format == 'd' || *format == 'i')
		return (ft_putnbr(var_arg(args, int)));
	else if (format == 'u')
		return (ft_putunsignbr(var_arg(args, unsigned int)));
	else if (format == 'x')
		return (ft_putnbr_base(var_arg(args, unsigned int),
					"0123456789abcdef"));
	else if (format == 'X')
		return (ft_putnbr_base(var_arg(args, unsigned int),
					"0123456789ABCDEF"));
	else if (format == '%')
		return (ft_putchar('%'));
	return (-1);
}

int	ft_printf(char const *format, ...)
{}
