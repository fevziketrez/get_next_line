/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 03:28:41 by fketrez           #+#    #+#             */
/*   Updated: 2025/07/24 03:41:07 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	gnl_helper(char **res, char **left)
{
	if (strchr_i((*res), 0, '\n') != -1)
	{
		free((*left));
		(*left) = ft_substr((*res), strchr_i((*res), 0, '\n') + 1,
				ft_strlen((*res)));
		(*res)[strchr_i((*res), 0, '\n') + 1] = '\0';
	}
	else
	{
		free((*left));
		(*left) = NULL;
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
	static char	*left;

	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	res = left;
	read_buf = calloc(BUFFER_SIZE + 1, 1); //calloc
	read_size = 1;
	while (strchr_i(read_buf, 0, '\n') == -1 && read_size > 0)
	{
		read_size = read(fd, read_buf, BUFFER_SIZE);
		temp = ft_strjoin(res, read_buf, read_size);
		if (res != left)
			free(res);
		res = temp;
	}
	free(read_buf);
	gnl_helper(&res, &left);
	return (res);
}
