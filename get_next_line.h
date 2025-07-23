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

int		ft_strlen(char *str);
void	*ft_memcpy(void *dest, void *src, size_t n);
char	*ft_substr(char *s, unsigned int start, size_t len);
char	*ft_strjoin(char *s1, char *s2, size_t size);
char	*get_next_line(int fd);
int		strchr_i(char *str, int i, char c);

#endif
