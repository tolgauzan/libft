/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:56:54 by tuzan             #+#    #+#             */
/*   Updated: 2024/10/22 20:56:54 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && (unsigned char)*s != (unsigned char)c)
		s++;
	if ((unsigned char)*s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}
/*
//TEST CASES
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	str[] = "Hello world !";
	int			chr[5] = {'o', 'c', '\0', '\x7f', 'H' + 256};

	printf("Source : %s\n\n", str);
	for (int i = 0; i < 5; i++)
	{
		printf("Looking for '%c'\n", chr[i]);
		printf("strchr : %p\n", strchr(str, chr[i]));
		printf("ft_strchr : %p\n\n", ft_strchr(str, chr[i]));
	}
	return (0);
}
*/