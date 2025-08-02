/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 03:37:30 by fketrez           #+#    #+#             */
/*   Updated: 2025/08/02 12:32:27 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

// void	printlinesbro(int fd)
// {
// 	char *line= get_next_line(fd);
// 	
// // 	printlinesbro(fd);
// // 	printf("%s", line);
// // 	free(line);
// // }
// int	main(void)
// {
// 	ssize_t	fd;
// 	// char	*line;

// 	fd = open("test.txt", O_RDONLY);
// 	line = get_next_line(fd);
// 	while (line)
// 	{
// 		printf("%s", line);
// 		free(line);
// 		line = get_next_line(fd);
// 	}
// 	// printf("%s", line);


// // 	// char *lines[1024];
// // 	// char *line;
// // 	// int i = 0;
// // 	fd = open("test.txt", O_RDONLY);
// // 	// line = get_next_line(fd);
// // 	// while (line)
// // 	// {
// // 	// 	lines[i] = line;
// // 	// 	line = get_next_line(fd);
// // 	// 	i++;
// // 	// }
// // 	// i--;
// // 	// while(i >= 0)
// // 	// {
// // 	// 		printf("%s", lines[i]);
// // 	// 		free(lines[i]);
// // 	// 		i--;
// // 	// }
// // 	// char *lines[1024];
// // 	// i = 0;
// // 	char *terminal;
// // 	terminal = get_next_line(0);
// // 	while(terminal)
// // 	{
// // 		printf("%s", terminal);
// // 		free(terminal);
// // 		terminal = get_next_line(0);
// // 	}

// }

// void print_file(char *filename)
// {
// 	ssize_t fd;
// 	char *line;
// 	fd = open(filename, O_RDONLY);
// 	line = get_next_line(fd);
// 	while (line)
// 	{
// 		printf("%s", line);
// 		free(line);
// 		line = get_next_line(fd);
// 	}
// }

// int main(int argc, char **argv)
// {
// 	if (argc == 1)
// 		return 0;
// 	int i = 1;

// 	while(argv[i])
// 	{
// 		print_file(argv[i]);
// 		i++;
// 	}
// 	return 0;
// }


int main()
{
	int fd1 = open("test1.txt", O_RDONLY);
	int fd2 = open("test2.txt", O_RDONLY);
	char *test = malloc(100);
	char *line1;
	char *line2;
	// test[0] = '\t';
	line1 = test;
	line2 = test;
	while (line1 || line2)
	{
		if (line1)
		{
			line1 = get_next_line(fd1);
			printf("%s", line1);
			free(line1);
		}
		if (line2)
		{

			line2 = get_next_line(fd2);
			printf("%s", line2);
			free(line2);
		}

	}
	// if (*test == '\t')
	free(test);
	// free(line1);
	// free(line2);
}