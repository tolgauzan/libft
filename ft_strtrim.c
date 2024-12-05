/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 02:44:50 by tuzan             #+#    #+#             */
/*   Updated: 2024/10/23 02:44:50 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	size;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	size = ft_strlen(s1);
	while (size > 0 && ft_strchr(set, s1[size - 1]))
		size--;
	trimmed = (char *)malloc((size + 1) * sizeof(char));
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1, size + 1);
	return (trimmed);
}
/*
//TEST CASES
#include <stdio.h>

int	main(void)
{
	char	str[] = " abc\nHello\t42! \tbbc \n";
	char	set[] = " abc\n\t";

	char	*trimmed = ft_strtrim(str, set);
	if (!trimmed)
		printf("An error occured.\n");
	else
		printf("Trimmed str : %s\n", trimmed);
	free(trimmed);
	return (0);
}
*/