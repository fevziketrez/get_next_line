/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 03:28:41 by fketrez           #+#    #+#             */
/*   Updated: 2025/08/02 12:24:51 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void	gnl_helper(char **res, char **left_fd)
{
	if (strchr_i((*res), 0, '\n') != -1)
	{
		free(*(left_fd));
		(*left_fd) = ft_substr((*res), strchr_i((*res), 0, '\n') + 1,
				ft_strlen((*res)));
		(*res)[strchr_i((*res), 0, '\n') + 1] = '\0';
	}
	else
	{
		free(*(left_fd));
		(*left_fd) = NULL;
	}
	if ((*res) && (*res)[0] == '\0')
	{
		free((*res));
		(*res) = NULL;
	}
}

char	*get_next_line(int fd)
{
	char		*read_buf;
	ssize_t		read_size;
	char		*res;
	char		*temp;
	static char	*left[1024];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	res = left[fd];
	read_buf = ft_calloc(BUFFER_SIZE + 1, 1); //calloc
	read_size = 1;
	while (strchr_i(read_buf, 0, '\n') == -1 && read_size > 0)
	{
		read_size = read(fd, read_buf, BUFFER_SIZE);
		temp = ft_strjoin(res, read_buf, read_size);
		if (res != left[fd])
			free(res);
		res = temp;
	}
	free(read_buf);
	gnl_helper(&res, &(left[fd]));
	return (res);
}
