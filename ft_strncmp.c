/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:47:20 by tuzan             #+#    #+#             */
/*   Updated: 2024/10/22 21:47:20 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
//TEST CASES
#include <string.h>
#include <stdio.h>

void	test(const char *str1, const char *str2, int n)
{
	printf("%s vs %s (%d characters)\n", str1, str2, n);
	printf("strncmp : %d\n", strncmp(str1, str2, n));
	printf("ft_strncmp : %d\n\n", ft_strncmp(str1, str2, n));
}

int	main(void)
{
	test("apple", "apple", 6);
	test("apple", "apples", 5);
	test("apple", "apples", 6);
	test("apple", "42", 1);
	test("programming", "programmers", 8);
	test("programming", "programmers", 9);
	test("\200", "\0", 1);
	test("\x12\xff\x65\x12\xbd\xde\xad", "\x12\x02", 6);
	return (0);
}
*/