/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 04:19:23 by tuzan             #+#    #+#             */
/*   Updated: 2024/10/23 04:19:23 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	ssize_t	bytes_written;
	size_t	strlen;

	if (s || fd >= 0)
	{
		strlen = ft_strlen(s);
		bytes_written = write(fd, s, strlen);
		while (bytes_written != -1 && (size_t)bytes_written < strlen)
		{
			strlen -= bytes_written;
			s += bytes_written;
			bytes_written = write(fd, s, strlen);
		}
		ft_putchar_fd('\n', fd);
	}
}
/*
//TEST CASES
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	char	*test_cases[] = {"Hello 42!", "Hello", "World!"};
	int		fd = open("ft_putendl_fd_test", O_CREAT | O_RDWR, 0777);

	printf("Standard input :\n");
	for (size_t i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++)
		ft_putendl_fd(test_cases[i], STDIN_FILENO);
	printf("Standard output :\n");
	for (size_t i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++)
		ft_putendl_fd(test_cases[i], STDOUT_FILENO);
	printf("Standard error :\n");
	for (size_t i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++)
		ft_putendl_fd(test_cases[i], STDERR_FILENO);
	if (fd != -1)
	{
		printf("New file : check file ft_putendl_fd_test\n");
		for (size_t i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++)
			ft_putendl_fd(test_cases[i], fd);
		close(fd);
	}
	return (0);
}
*/