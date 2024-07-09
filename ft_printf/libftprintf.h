/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thivu <thivu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:10:46 by thivu             #+#    #+#             */
/*   Updated: 2024/07/09 15:01:42 by thivu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <limits.h>

int     check_format(const char *format, void *args);
int	    ft_putchar(char c);
int	    ft_putstr(char *s);
int 	ft_putnbr(int n);
int     ft_putunsignbr(unsigned int n);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *s, int c);

#endif
