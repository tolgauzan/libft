/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 02:38:28 by tuzan             #+#    #+#             */
/*   Updated: 2024/10/23 02:38:28 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (s2[j])
		j++;
	joined = (char *)malloc((i + j + 1) * sizeof(char));
	if (!joined)
		return (NULL);
	i = 0;
	while (*s1)
		joined[i++] = *s1++;
	while (*s2)
		joined[i++] = *s2++;
	joined[i] = '\0';
	return (joined);
}
/*
//TEST CASES
#include <stdio.h>

int	main(void)
{
	char	s1[] = "Hello";
	char	s2[] = " ";
	char	s3[] = "42!";

	printf("Initial string : \"%s\"\n", s1);
	char	*joined1 = ft_strjoin(s1, s2);
	if (!joined1)
		printf("Memory allocation failed.\n");
	else
		printf("Joined string : \"%s\"\n", joined1);
	char	*joined2 = ft_strjoin(joined1, s3);
	if (!joined2)
		printf("Memory allocation failed.\n");
	else
		printf("Joined string : \"%s\"\n", joined2);
	free(joined1);
	free(joined2);
	return (0);
}
*/