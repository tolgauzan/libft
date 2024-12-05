/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 02:29:11 by tuzan             #+#    #+#             */
/*   Updated: 2024/10/23 02:29:11 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	start_i;
	size_t	size;

	start_i = 0;
	size = 0;
	if (!s)
		return (NULL);
	while (start_i < start && s[start_i])
		start_i++;
	while (size < len && s[size + start_i])
		size++;
	substr = (char *)malloc((size + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	substr[size] = '\0';
	while (size--)
	{
		substr[size] = s[start_i + size];
	}
	return (substr);
}
/*
//TEST CASES
#include <stdio.h>

int	main(void)
{
	char	string[] = "Hello World 42";
	char	*sub1 = ft_substr(string, 0, 5);
	char	*sub2 = ft_substr(string, 6, 30);
	char	*sub3 = ft_substr(NULL, 5, 5);

	printf("Source : %s\n", string);
	if (!sub1)
		printf("An error occured.\n");
	else
		printf("Substr from index = %d of length len = %d\n%s\n", 0, 5, sub1);
	if (!sub2)
		printf("An error occured.\n");
	else
		printf("Substr from index = %d of length len = %d\n%s\n", 6, 30, sub2);
	if (!sub3)
		printf("An error occured.\n");
	else
		printf("Substr from index = %d of length len = %d\n%s\n", 5, 5, sub3);
	free(sub1);
	free(sub2);
}
*/