/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:05:56 by tuzan             #+#    #+#             */
/*   Updated: 2024/10/22 18:05:56 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n--)
		*(unsigned char *)s++ = 0;
}
/*
//TEST CASES
#include <stdio.h>
#include <string.h>

void	print_bytes(const void *s, int n)
{
	int	i;

	i = 0;
	printf("Memory : ");
	while (i < n)
	{
		printf("%d ", ((unsigned char *)s)[i]);
		i++;
	}
	printf("\n\n");
}

void	test(size_t len)
{
	char	str1[30] = "Hello world!";
	char	str2[30] = "Hello world!";

	printf("***********************************************\n");
	printf("Input : \"%s\"\n", str1);
	print_bytes(str1, 30);
	printf("Setting %ld zeros\n", len);

	bzero(str1, len);
	printf("bzero : %s\n", str1);
	print_bytes(str1, 30);

	ft_bzero(str2, len);
	printf("ft_bzero : %s\n", str2);
	print_bytes(str2, 30);
}

int	main(void)
{
	test(0);
	test(5);
	test(10);
	return (0);
}
*/