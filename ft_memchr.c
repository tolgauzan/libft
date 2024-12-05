/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 23:16:58 by tuzan             #+#    #+#             */
/*   Updated: 2024/10/22 23:16:58 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s++;
	}
	return (NULL);
}
/*
//TEST CASES
#include <stdio.h>
#include <string.h>

void	print_bytes(const void *s, int n, void *found)
{
	for (int i = 0; i < n; i++)
	{
		if (found && &((unsigned char *)s)[i] == found)
			printf("(%d) ", ((unsigned char *)s)[i]);
		else
			printf("%d ", ((unsigned char *)s)[i]);
	}
	printf("\n");
}

void	test(const void *s, int c, size_t n)
{
	void	*orjinal;
	void	*mine;

	printf("Looking for %d ≡ %d [256] in memory area : ", c, c % 256);
	print_bytes(s, n, NULL);
	orjinal = memchr(s, c, n);
	mine = ft_memchr(s, c, n);
	if (!orjinal)
		printf("memchr : NULL \n");
	else
	{
		printf("memchr : ");
		print_bytes(s, n, orjinal);
	}
	if (!mine)
		printf("ft_memchr : NULL \n");
	else
	{
		printf("ft_memchr : ");
		print_bytes(s, n, mine);
	}
}

int	main(void)
{
	char	c[] = {0, 1, 2, 3, 4, 5};
	char	s[] = "Hello World!";

	printf("Input : %s\n", s);
	print_bytes(s, strlen(s), NULL);
	test(s, 'H', 0);
	test(s, 'H', 1);
	test(s, 'e', 3);
	test(s, 'x', 16);
	test(s, 'o' + 256, 3);
	printf("------------------------------------\n");
	printf("Input : %s\n", c);
	print_bytes(c, strlen(c), NULL);
	test(c, 0, 0);
	test(c, 0, 1);
	test(c, 2, 3);
	test(c, 6, 16);
	test(c, 2 + 256, 3);
	return (0);
}
*/