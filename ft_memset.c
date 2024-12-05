/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:02:19 by tuzan             #+#    #+#             */
/*   Updated: 2024/10/22 18:02:19 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	void	*b_start;

	b_start = b;
	while (n--)
		*(unsigned char *)b++ = (unsigned char)c;
	return (b_start);
}
/*
//TEST CASES
#include <stdio.h>
#include <string.h>

void	print_bytes(const void *s, int n)
{
	printf("Memory : ");
	for (int i = 0; i < n; i++)
		printf("%d ", ((unsigned char *)s)[i]);
	printf("\n");
}

void	test(char c, size_t len)
{
	char	str1[30] = "Hello World!";
	char	str2[30] = "Hello World!";

	printf("Input : \"%s\"\n", str1);
	print_bytes(str1, 30);
	printf("Setting %ld '%c'\n", len, c);
	memset(str1, c, len);
	ft_memset(str2, c, len);
	printf("memset : %s\n", str1);
	print_bytes(str1, 30);
	printf("ft_memset : %s\n", str2);
	print_bytes(str2, 30);
	printf("\n-------------------------------\n");
}

int	main(void)
{
	test('H', 0);
	test('l', 5);
	test(114, 20);
	test('\0', 20);
	return (0);
}
*/