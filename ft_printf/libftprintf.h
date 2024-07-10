/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thivu <thivu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:09:20 by thivu             #+#    #+#             */
/*   Updated: 2024/07/10 14:07:02 by thivu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <limits.h>

int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_putunsignbr(unsigned int n);
int		ft_putnbr_base(unsigned long nbr, char *base);
int		ft_putpoint(unsigned long p);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *s, int c);

#endif
