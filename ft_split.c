/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 02:53:46 by tuzan             #+#    #+#             */
/*   Updated: 2024/10/23 02:53:46 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	**ft_free(char **list)
{
	size_t	i;

	i = 0;
	while (list[i] != NULL)
	{
		free(list[i]);
		list[i] = NULL;
		i++;
	}
	free(list);
	return (NULL);
}

static size_t	ft_wordlen(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			s += ft_wordlen(s, c);
			count++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**list;
	size_t	i;

	if (!s)
		return (NULL);
	list = (char **)malloc((ft_wordcount(s, c) + 1) * sizeof(char *));
	if (!list)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			list[i] = ft_substr(s, 0, ft_wordlen(s, c));
			if (!list[i])
				return (ft_free(list));
			s += ft_wordlen(s, c);
			i++;
		}
	}
	list[i] = NULL;
	return (list);
}
/*
//TEST CASES
#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello World 42";
	char	**list = ft_split(str, ' ');

	if (!list)
		printf("An error occured.\n");
	else
	{
		int	i = 0;
		while (list[i])
		{
			printf("%s\n", list[i]);
			free(list[i]);
			i++;
		}
	}
	return (0);
}
*/