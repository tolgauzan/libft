/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:15:34 by tuzan             #+#    #+#             */
/*   Updated: 2024/10/22 20:15:34 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dsize)
{
	size_t	i;

	i = 0;
	if (dsize > 0)
	{
		while (src[i] && i < (dsize - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
/*
//TEST CASES
#include <stdio.h>
#include <string.h>

void	test(const char *src, unsigned int size)
{
	char			dest_orjinal[20];
	char			dest_mine[20];
	int				n_orjinal;
	unsigned int	n_mine;

	n_orjinal = strlcpy(dest_orjinal, src, size);
	n_mine = ft_strlcpy(dest_mine, src, size);
	printf("Source : '%s'\n", src);
	printf("Copying %d characters\n", size);
	printf("strlcpy : '%s', return length %d\n", dest_orjinal, n_orjinal);
	printf("ft_strlcpy : '%s', return length %d\n\n", dest_mine, n_mine);
}

int	main(void)
{
	test("", 20);
	test("Hello world !", 20);
	test("Hello world !", 14);
	test("Hello world !", 10);
	test("Hello world !", 1);
	test("Hello world !", 0);
	return (0);
}
*/