/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:13:37 by tuzan             #+#    #+#             */
/*   Updated: 2024/10/22 21:13:37 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (unsigned char)c)
			last = (char *)s;
		s++;
	}
	if (*s == (unsigned char)c)
		last = (char *)s;
	return (last);
}
/*
//TEST CASES
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	string[] = "Hello world !";
	int			chr[4] = {'o', 'c', '\0', '\x7f'};

	printf("Source : %s\n\n", string);
	for (int i = 0; i < 4; i++)
	{
		printf("Looking for '%c'\n", chr[i]);
		printf("strrchr : %p\n", strrchr(string, chr[i]));
		printf("ft_strrchr : %p\n\n", ft_strrchr(string, chr[i]));
	}
	return (0);
}
*/