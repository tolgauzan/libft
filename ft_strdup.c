/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 00:35:40 by tuzan             #+#    #+#             */
/*   Updated: 2024/10/23 00:35:40 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	str = (char *)malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
//TEST CASES
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*src = "Hello 42 !";
	char	*cpy1;
	char	*cpy2;

	cpy1 = strdup(src);
	cpy2 = ft_strdup(src);
	printf("Source : %s\n", src);
	if (!cpy1)
		printf("Memory allocation failed.\n");
	else
		printf("strdup : %s\n", cpy1);
	if (!cpy2)
		printf("Memory allocation failed.\n");
	else
		printf("ft_strdup : %s\n", cpy2);
	free(cpy1);
	free(cpy2);
	return (0);
}
*/