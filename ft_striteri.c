/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 04:06:05 by tuzan             #+#    #+#             */
/*   Updated: 2024/10/23 04:06:05 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s && f && s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
//TEST CASES
#include <stdio.h>
#include "libft.h"

void	foo(unsigned int i, char *c)
{
	if (i % 2)
		*c = ft_tolower(*c);
	else
		*c = ft_toupper(*c);
}

int	main(void)
{
	char	str[] = "hello world 42";

	printf("Before ft_striteri : %s\n", str);
	ft_striteri(str, &foo);
	printf("After ft_striteri : %s\n", str);
	return (0);
}
*/