/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 04:14:18 by tuzan             #+#    #+#             */
/*   Updated: 2024/10/23 04:14:18 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0)
		write(fd, &c, 1);
}
/*
//TEST CASES
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	char	test_cases[] = {'H', 'e', 'l', 'l', 'o', ' ', '4', '2', '!', '\n'};
	int		fd = open("ft_putchar_fd_test", O_CREAT | O_RDWR, 0777);

	printf("Standard input :\n");
	for (size_t i = 0; i < sizeof(test_cases); i++)
		ft_putchar_fd(test_cases[i], STDIN_FILENO);
	printf("Standard output :\n");
	for (size_t i = 0; i < sizeof(test_cases); i++)
		ft_putchar_fd(test_cases[i], STDOUT_FILENO);
	printf("Standard error :\n");
	for (size_t i = 0; i < sizeof(test_cases); i++)
		ft_putchar_fd(test_cases[i], STDERR_FILENO);
	if (fd != -1)
	{
		printf("New file : check file ft_putchar_fd_test\n");
		for (size_t i = 0; i < sizeof(test_cases); i++)
			ft_putchar_fd(test_cases[i], fd);
		close(fd);
	}
	return (0);
}
*/