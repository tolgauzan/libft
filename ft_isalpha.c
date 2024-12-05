/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:17:44 by tuzan             #+#    #+#             */
/*   Updated: 2024/10/22 17:17:44 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
/*
//TEST CASES
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("char\tprint\tisalpha\tft_isalpha\n");
	for (int i = 0; i <= 255; i++)
	{
		printf("%d\t", i);
		if (isprint(i))
			printf("%c\t", i);
		else
			printf("-\t");
		printf("%d\t", isalpha(i));
		printf("%d\n", ft_isalpha(i));
	}
	return (0);
}
*/