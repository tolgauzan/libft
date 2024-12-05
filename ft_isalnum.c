/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:38:30 by tuzan             #+#    #+#             */
/*   Updated: 2024/10/22 17:38:30 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (1);
	return (0);
}
/*
//TEST CASES
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("char\tprint\tisalnum\tft_isalnum\n");
	for (int i = 0; i <= 255; i++)
	{
		printf("%d\t", i);
		if (isprint(i))
			printf("%c\t", i);
		else
			printf("-\t");
		printf("%d\t", isalnum(i));
		printf("%d\n", ft_isalnum(i));
	}
	return (0);
}
*/