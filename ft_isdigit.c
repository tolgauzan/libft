/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:35:39 by tuzan             #+#    #+#             */
/*   Updated: 2024/10/22 17:35:39 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
/*
//TEST CASES
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("char\tprint\tisdigit\tft_isdigit\n");
	for (int i = 0; i <= 255; i++)
	{
		printf("%d\t", i);
		if (isprint(i))
			printf("%c\t", i);
		else
			printf("-\t");
		printf("%d\t", isdigit(i));
		printf("%d\n", ft_isdigit(i));
	}
	return (0);
}
*/