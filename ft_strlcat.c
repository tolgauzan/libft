/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:42:27 by tuzan             #+#    #+#             */
/*   Updated: 2024/10/22 20:42:27 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dsize)
{
	size_t	i;
	size_t	d;
	size_t	dlen;
	size_t	slen;

	i = 0;
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	d = dlen;
	if (dsize <= dlen)
		return (dsize + slen);
	while (src[i] && d < (dsize - 1))
	{
		dest[d] = src[i];
		d++;
		i++;
	}
	dest[d] = '\0';
	return (dlen + slen);
}
/*
//TEST CASES
#include <string.h>
#include <stdio.h>

void	test(const char *src, unsigned int dsize)
{
	char	dest_orjinal[100] = "Hello ";
	char	dest_mine[100] = "Hello ";
	int		n_orjinal;
	int		n_mine;

	printf("Source : '%s'\n", src);
	printf("dsize = %d\n", dsize);
	n_orjinal = strlcat(dest_orjinal, src, dsize);
	printf("strlcat : '%s', returned length %d\n", dest_orjinal, n_orjinal);
	n_mine = ft_strlcat(dest_mine, src, dsize);
	printf("ft_strlcat : '%s', returned length %d\n\n", dest_mine, n_mine);
}

int	main(void)
{
	test("", 10);
	test(" World 42!", 0);
	test(" World 42!", 5);
	test(" World 42!", 10);
	test(" World 42!", 15);
	return (0);
}
*/