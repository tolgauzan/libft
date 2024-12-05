/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 03:45:30 by tuzan             #+#    #+#             */
/*   Updated: 2024/10/23 03:45:30 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*mapped;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	mapped = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!mapped)
		return (NULL);
	i = 0;
	while (s[i])
	{
		mapped[i] = f(i, s[i]);
		i++;
	}
	mapped[i] = '\0';
	return (mapped);
}
/*
//TEST CASES
#include <stdio.h>

char	foo(unsigned int i, char c)
{
	if (i % 2)
		return (ft_tolower(c));
	else
		return (ft_toupper(c));
}

int	main(void)
{
	char	str[] = "Hello world 42!";
	char	*newstr;

	printf("Source : %s\n", str);
	newstr = ft_strmapi(str, &foo);
	if (!newstr)
		printf("An error occured.\n");
	else
		printf("Modified copy : %s\n", newstr);
	free(newstr);
	return (0);
}
*/