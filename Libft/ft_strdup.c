/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thivu <thivu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:18:53 by thivu             #+#    #+#             */
/*   Updated: 2024/03/21 20:16:06 by thivu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*result;

	len = ft_strlen(s1);
	result = malloc(len + 1);
	if (result == NULL)
		return (NULL);
	ft_memcpy(result, s1, len + 1);
	return (result);
}
/*
The strdup() function allocates sufficient memory for a copy of 
the string s1, does the copy, and returns a pointer to it.  
The pointer may subsequently be used 
as an argument to the function free(3).

If insufficient memory is available, NULL is returned
and errno is set to ENOMEM.

The strndup() function copies at most n characters from the
string s1 always NUL terminating the copied string.
*/