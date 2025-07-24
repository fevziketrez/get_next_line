/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 03:37:30 by fketrez           #+#    #+#             */
/*   Updated: 2025/07/24 03:37:46 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	main(void)
{
	ssize_t	fd;
	char	*line;

	fd = open("test.txt", O_RDONLY, 0777);
	while (line)
	{
		line = get_next_line(fd);
		printf("%s", line);
		free(line);
	}
}
