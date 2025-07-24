#ifndef GNL_H
# define GNL_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

ssize_t 	ft_strlen(char *str);
void	    *ft_memcpy(void *dest, void *src, ssize_t n);
char        *ft_substr(char *s, ssize_t start, ssize_t len);
char        ft_strjoin(char *s1, char *s2, ssize_t size);
char        *get_next_line(int fd);
ssize_t     strchr_i(char *str, ssize_t i, char c);

#endif
