/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 03:25:04 by tuzan             #+#    #+#             */
/*   Updated: 2024/10/23 03:25:04 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_digitlen(int n)
{
	long	nb;
	size_t	len;

	len = 0;
	nb = n;
	if (nb <= 0)
	{
		nb *= -1;
		len++;
	}
	while (nb)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	size_t	len;
	char	*str;

	nb = n;
	len = ft_digitlen(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	str[len] = '\0';
	while (nb > 0)
	{
		str[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
/*
//TEST CASES
#include <stdio.h>

int	main(void)
{
	char	*str;
	int		integers[5] = {12345, -98765, 0, -2147483648, 2147483647};

	for (int i = 0; i < 5; i++)
	{
		printf("Input : %d\n", integers[i]);
		str = ft_itoa(integers[i]);
		if (!str)
			printf("Memory allocation failed.\n\n");
		else
		{
			printf("ft_itoa : %s\n\n", str);
			free(str);
		}
	}
	return (0);
}
*/