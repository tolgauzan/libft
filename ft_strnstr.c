/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 23:59:18 by tuzan             #+#    #+#             */
/*   Updated: 2024/10/22 23:59:18 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while ((i + j) < len && haystack[i + j] == needle[j] && needle[j])
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
/*
//TEST CASES
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	haystack[] = "Hello world";
	char	*needles[] = {"", "Hell", "orl", "42", NULL};
	size_t	n_i = 0;
	size_t	len;
	char	*result;

	while (needles[n_i])
	{
		len = 0;
		printf("\"%s\" needle \"%s\"\n", haystack, needles[n_i]);
		while (len <= 10)
		{
			result = ft_strnstr(haystack, needles[n_i], len);
			printf("ft_strnstr\t%ld\t%s\n", len, result);
			len++;
		}
		printf("\n");
		n_i++;
	}
	return (0);
}
*/