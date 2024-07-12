/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thivu <thivu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:06:36 by thivu             #+#    #+#             */
/*   Updated: 2024/07/12 11:42:52 by thivu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
	ft_printf("%s\n", (char *)NULL);
	printf("%s\n", (char *)NULL);
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
