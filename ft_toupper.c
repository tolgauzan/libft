/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:43:50 by tuzan             #+#    #+#             */
/*   Updated: 2024/10/22 17:43:50 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
/*
//TEST CASES
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("char\tprint\ttolower\tft_tolower\n");
	for (int i = 97; i <= 122; i++)
	{
		printf("%d\t", i);
		if (isprint(i))
			printf("%c\t", i);
		else
			printf("-\t");
		printf("%c\t", toupper(i));
		printf("%c\n", ft_toupper(i));
	}
	return (0);
}
*/