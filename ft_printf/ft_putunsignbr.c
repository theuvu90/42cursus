/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thivu <thivu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:15:35 by thivu             #+#    #+#             */
/*   Updated: 2024/07/09 15:03:17 by thivu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_putunsignbr(unsigned int n)
{
    unsigned int    count;

    count = 0;
    if (n > 9)
    {
        count += ft_putnbr(n / 10);
        count += ft_putnbr(n % 10);
    }
    count += ft_putchar(n + '0');
    return (count);
}
