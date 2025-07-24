/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 03:38:05 by fketrez           #+#    #+#             */
/*   Updated: 2025/07/24 03:40:03 by fketrez          ###   ########.fr       */
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

# include <string.h> // CALLOC

ssize_t		ft_strlen(char *str);
void		*ft_memcpy(void *dest, void *src, ssize_t n);
char		*ft_substr(char *s, ssize_t start, ssize_t len);
char		*ft_strjoin(char *s1, char *s2, ssize_t size);
char		*get_next_line(int fd);
ssize_t		strchr_i(char *str, ssize_t i, char c);

#endif
