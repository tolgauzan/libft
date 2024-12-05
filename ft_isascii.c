/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:39:42 by tuzan             #+#    #+#             */
/*   Updated: 2024/10/22 17:39:42 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
//TEST CASES
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("char\tprint\tisascii\tft_isascii\n");
	for (int i = 0; i <= 255; i++)
	{
		printf("%d\t", i);
		if (isprint(i))
			printf("%c\t", i);
		else
			printf("-\t");
		printf("%d\t", isascii(i));
		printf("%d\n", ft_isascii(i));
	}
	return (0);
}
*/