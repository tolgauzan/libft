/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:10:51 by tuzan             #+#    #+#             */
/*   Updated: 2024/10/22 18:10:51 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*dest_start;

	if (dest == src || n == 0)
		return (dest);
	dest_start = dest;
	while (n--)
	{
		*(unsigned char *)dest++ = *(unsigned char *)src++;
	}
	return (dest_start);
}
/*
//TEST CASES
#include <string.h>
#include <stdio.h>

void	test(size_t len)
{
	char	str1[20] = "Hello world !";
	char	str2[20] = "Hello world !";
	char	str3[20] = "friend";
	char	str4[20] = "Hello world !";
	char	str5[20] = "Hello world !";
	void	*nullptr = NULL;

	printf("Dest string : \"%s\"\n", str1);
	printf("Copying \"%s\" to 6th char (n = %ld)\n", str3, len);
	memcpy(str1 + 6, str3, len);
	ft_memcpy(str2 + 6, str3, len);
	printf("memcpy : %s\n", str1);
	printf("ft_memcpy : %s\n", str2);

	printf("Copying \"%s\" to 6th char (n = %ld)\n", str4, len);
	memcpy(str4 + 6, str4, len);
	ft_memcpy(str5 + 6, str5, len);
	printf("memcpy : %s\n", str4);
	printf("ft_memcpy : %s\n", str5);
	if (len > 6)
		printf("Memory areas overlap ! Use memmove instead.\n");
	if (len == 0)
	{
		printf("Destination string is NULL\n"); // CRASH when len > 0
		memcpy(nullptr, str3, len);
		ft_memcpy(nullptr, str3, len);
		printf("Does nothing.\n");
		printf("Source string is NULL\n"); // CRASH when len > 0
		memcpy(str3, nullptr, len);
		ft_memcpy(str3, nullptr, len);
		printf("Does nothing.\n");
	}
}

int	main(void)
{
	test(0);
	printf("\n");
	test(3);
	printf("\n");
	test(6);
	printf("\n");
	test(10);
	return (0);
}
*/