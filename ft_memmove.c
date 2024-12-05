/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:43:16 by tuzan             #+#    #+#             */
/*   Updated: 2024/10/22 18:43:16 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == src || n == 0)
		return (dest);
	if (dest < src)
	{
		while (i < n)
		{
			*((unsigned char *)dest + i) = *((unsigned char *)src + i);
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			*((unsigned char *)dest + n - 1) = *((unsigned char *)src + n - 1);
			n--;
		}
	}
	return (dest);
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
	char	str6[20] = "Hello world !";
	char	str7[20] = "Hello world !";
	void	*nullptr = NULL;

	printf("Destination string : \"%s\"\n", str1);
	printf("Copying \"%s\" to 6th char (n = %ld)\n", str3, len);
	memmove(str1 + 6, str3, len);
	ft_memmove(str2 + 6, str3, len);
	printf("memmove : %s\n", str1);
	printf("ft_memmove : %s\n", str2);
	printf("Copying \"%s\" to 6th char (n = %ld)\n", str4, len);
	memmove(str4 + 6, str4, len);
	ft_memmove(str5 + 6, str5, len);
	printf("memmove : %s\n", str4);
	printf("ft_memmove : %s\n", str5);
	printf("Copying \"%s\" from 6th char (n = %ld)\n", str6, len);
	memmove(str6, str6 + 6, len);
	ft_memmove(str7, str7 + 6, len);
	printf("memmove : %s\n", str6);
	printf("ft_memmove : %s\n", str7);
	if (len == 0)
	{
		printf("Destination string is NULL\n"); // CRASH when len > 0
		memmove(nullptr, str3, len);
		ft_memmove(nullptr, str3, len);
		printf("Does nothing.\n");
		printf("Source string is NULL\n"); // CRASH when len > 0
		memmove(str3, nullptr, len);
		ft_memmove(str3, nullptr, len);
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