/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thivu <thivu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:35:40 by thivu             #+#    #+#             */
/*   Updated: 2024/06/28 12:50:38 by thivu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			s += word_len(s, c);
		}
		else
			s++;
	}
	return (count);
}

static	void	*free_str(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		count;

	if (!s)
		return (NULL);
	count = count_words(s, c);
	split = malloc(sizeof(char *) * (count + 1));
	if (!split)
		return (NULL);
	split[count] = NULL;
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			split[i] = ft_substr(s, 0, word_len(s, c));
			if (!split[i++])
				return (free_str(split));
			s += word_len(s, c);
		}
		else
			s++;
	}
	return (split);
}
/*
#include <stdio.h>
int main(void)
{
	char const str[] = "42,Madrid,es,el,campus,de,programación,más,innovador";
	char c = ',';
	char **result = ft_split(str, c);
	if (result == NULL)
	{
		printf("Fallo en asignación de memoria.\n");
		return (1);
	}
	int i = 0;
	while (result[i] != NULL)
	{
		printf("%s\n", result[i]);
		free(result[i]);
		result[i] = NULL;
		i++;
	}
	free_str(result);
	return (0);	
}*/
