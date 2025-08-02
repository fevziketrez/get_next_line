/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 03:38:05 by fketrez           #+#    #+#             */
/*   Updated: 2025/08/02 12:24:37 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

ssize_t		ft_strlen(char *str);
char		*ft_substr(char *s, ssize_t start, ssize_t len);
char		*ft_strjoin(char *s1, char *s2, ssize_t size);
char		*get_next_line(int fd);
ssize_t		strchr_i(char *str, ssize_t i, char c);
void	    *ft_calloc(size_t number, size_t size);

#endif
