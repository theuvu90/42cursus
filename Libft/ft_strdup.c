/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thivu <thivu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:18:53 by thivu             #+#    #+#             */
/*   Updated: 2024/06/28 14:40:57 by thivu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*result;

	result = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (result == NULL)
		return (NULL);
	ft_memcpy(result, s1, ft_strlen(s1) + 1);
	return (result);
}
/*#include <stdio.h>
#include <string.h>
int main(void){
	char origin[] = "Hola 42 Madrid";
	char *dup = ft_strdup(origin);
	printf("Original: %s\n", origin);
	printf("Duplicado: %s", dup);
	free(dup);
	return (0);
}

The strdup() function allocates sufficient memory for a copy of 
the string s1, does the copy, and returns a pointer to it.  
The pointer may subsequently be used 
as an argument to the function free(3).

If insufficient memory is available, NULL is returned
and errno is set to ENOMEM.

The strndup() function copies at most n characters from the
string s1 always NUL terminating the copied string.
*/
