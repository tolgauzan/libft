/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 23:33:48 by tuzan             #+#    #+#             */
/*   Updated: 2024/10/19 23:33:48 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>


static char	**free_memory(char **arr)
{
	char	**ptr;

	ptr = arr;
	while (*ptr)
	{
		free(*ptr);
		ptr++;
	}
	free(arr);
	return (NULL);
}

static int	count_words(const char *str, char sep)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (*str == sep)
			str++;
		else
		{
			count++;
			while (*str && *str != sep)
				str++;
		}
	}
	return (count);
}

static int	word_len(const char *str, char sep)
{
	int	len;

	len = 0;
	while (*str && *str != sep)
	{
		len++;
		str++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	arr = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			arr[i] = (char *)malloc((word_len(s, c) + 1) * sizeof(char));
			if (arr[i] == NULL)
				return (free_memory(arr));
			ft_strlcpy(arr[i], s, (word_len(s, c) + 1));
			s += word_len(s, c);
			i++;
		}
	}
	arr[i] = NULL;
	return (arr);
}
