/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 00:33:45 by tuzan             #+#    #+#             */
/*   Updated: 2024/10/23 00:33:45 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdint.h>

void	*ft_calloc(size_t count, size_t size)
{
	void			*ptr;
	unsigned char	*zeroing;
	size_t			total;

	if (count > SIZE_MAX / size)
		return (NULL);
	total = count * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	zeroing = (unsigned char *)ptr;
	while (total--)
		*zeroing++ = 0;
	return (ptr);
}
/*
//TEST CASES
#include <stdio.h>
#include <limits.h>
#include <stdint.h>

void	test(size_t count, size_t size)
{
	void		*orginal;
	void		*mine;

	orginal = calloc(count, size);
	mine = ft_calloc(count, size);
	printf("***************************************************\n");
	printf("Inputs : count = %lu, size = %lu\n", count, size);
	if (!orginal)
		printf("calloc : NULL\n");
	else
	{
		printf("calloc : %p\n", orginal);
		free(orginal);
	}
	if (!mine)
		printf("ft_calloc : NULL\n");
	else
	{
		printf("ft_calloc : %p\n", mine);
		free(mine);
	}
	printf("\n");
}

int	main(void)
{
	test(2, 2);
	test(SIZE_MAX, SIZE_MAX);
	test(INT_MAX, INT_MAX);
	test(INT_MIN, INT_MIN);
	test(0, 0);
	test(0, 5);
	test(5, 0);
	test(-5, -5);
	test(0, -5);
	test(-5, 0);
	test(3, -5);
	test(-5, 3);
	return (0);
}
*/