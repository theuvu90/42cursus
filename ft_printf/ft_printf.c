/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thivu <thivu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:06:36 by thivu             #+#    #+#             */
/*   Updated: 2024/07/12 10:24:34 by thivu            ###   ########.fr       */
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

static int	ft_format(const char *format, va_list args, int *i)
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

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		count;
	int		i;

	va_start(args, format);
	count = 0;
	i = 0;
	if (format)
		while (*(format + i))
			count += ft_format(format, args, &i);
	va_end(args);
	return (count);
}
/*
#include <stdio.h>
int	main(){
	ft_printf("%c\n", 'm');
	printf("%c\n", 'm');
	ft_printf("%s\n", "Hello World");
	printf("%s\n", "Hello World");
	ft_printf("%d\n", 12345678);
	printf("%d\n", 12345678);
	ft_printf("%i\n", 123);
	printf("%i\n", 123);
	ft_printf("%u\n", (unsigned int)4294967295);
	printf("%u\n", (unsigned int)4294967295);
	ft_printf("%x\n", 442211);
	printf("%x\n", 442211);
	ft_printf("%X\n", 442211);
	printf("%X\n", 442211);
	
	int nbr = 987654321;
	void * ptr = &nbr;
	ft_printf("%p\n", ptr);
	printf("%p\n", ptr);
	ft_printf("%p\n", NULL);
	printf("%p\n", NULL);
	
	ft_printf("%%\n");
	printf("%%\n");

	ft_printf("Hello %d %s 100%%\n", 42, "Madrid");
	printf("Hello %d %s 100%%\n", 42, "Madrid");
	return (0);
}*/
