/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thivu <thivu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:06:36 by thivu             #+#    #+#             */
/*   Updated: 2024/07/11 17:30:50 by thivu            ###   ########.fr       */
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

static int	ft_format(const char *format, va_list args, int *i)
{
	int	count;

	count = 0;
	if (*(format + *i) == '%' && *(format + *i + 1))
	{
		(*i)++;
		count = check_format(*(format + *i), args);
		if (count == -1)
			return (-1);
	}
	else if (*(format + *i) != '%')
	{
		count = ft_putchar(*(format + *i));
		if (count == -1)
			return (-1);
	}
	(*i)++;
	return (count);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		count;
	int		i;
	int		result;

	va_start(args, format);
	count = 0;
	i = 0;
	result = 0;
	if (format)
	{
		while (*(format + i))
		{
			result = ft_format(format, args, &i);
			if (result == -1)
			{
				va_end(args);
				return (-1);
			}
			count += result;
		}
	}
	va_end(args);
	return (count);
}
/*
#include <stdio.h>
int	main(){
	ft_printf("%s\n", "Hello World");
	printf("%s\n", "Hello World");
	ft_printf("%d\n", 12345678);
	printf("%d\n", 12345678);
	ft_printf("%i\n", 123);
	printf("%i\n", 123);
	ft_printf("%u\n", 294967295);
	printf("%u\n", 294967295);
	ft_printf("%x\n", 6411);
	printf("%x\n", 6411);
	ft_printf("%X\n", 6411);
	printf("%X\n", 6411);
	ft_printf("%p\n", "Hello");
	printf("%p\n", "Hello");
	ft_printf("%%");
	printf("%%");
	return (0);
}*/
