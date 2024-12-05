/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 00:25:48 by tuzan             #+#    #+#             */
/*   Updated: 2024/10/23 00:25:48 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == 43 || *str == 45)
	{
		if (*str == 45)
			sign = -1;
		str++;
	}
	if (*str == 43 || *str == 45)
		return (0);
	while (*str >= 48 && *str <= 57)
	{
		result *= 10;
		result += *str - 48;
		str++;
	}
	return (result * sign);
}
/*	
//TEST CASES
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	const char	*test_cases[] = {
		"12345",
		"-54321",
		"  6789",
		"+9876",
		"0",
		"-0",
		"2147483647",
		"-2147483648",
		"  123abc",
		"abc123",
		"123abc456",
		"",
		"   ",
		NULL
	};
	const char	**test = test_cases;

	while (*test)
	{
		printf("Input: \"%s\"\n", *test);
		printf("atoi: %d\n", atoi(*test));
		printf("ft_atoi: %d\n\n", ft_atoi(*test));
		test++;
	}
	return (0);
}
*/