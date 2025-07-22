#include "get_next_line.h"

char *get_next_line(int fd)
{
	char *read_buf = malloc(BUF_SIZE + 1);
	int read_size;
	char *res;
	static char *left = NULL;
	// printf("test1 AAAAA\n");
	res = left;
	if (fd < 0 || BUF_SIZE < 0)
		return (NULL);
	// printf("CCC\n");
	read_size = 1;
	// printf("DDD\n");
	while (strchr_i(read_buf, 0, '\n') == -1 && read_size > 0) // null görmediğin sürece ve okuma ok
	{
		read_size = read(fd, read_buf, BUF_SIZE);
		printf("buf was: %s\n", read_buf);
		// printf("BBB\n");
		res = ft_strjoin(res, read_buf);
		printf("res is: %s\n", res);
		// printf("X: char value: '%i'\n", res[ft_strlen(res) - 1]);
	}
	// printf("XXX\n");
	free(read_buf);
	// printf("YYY\n");
	// printf("BEFORE\nres is : %s\nleft is: %s\n", res, left);
	if (strchr_i(res, 0, '\n') != -1)
	{
		// printf("SKDFS\n");
		left = ft_substr(res, strchr_i(res, 0, '\n') + 1, ft_strlen(res) - (strchr_i(res, 0, '\n') + 1));
		res = ft_substr(res, 0, strchr_i(res, 0, '\n') + 1); /// substr index 1. arg included 2 excluded
	}
	else
	{
		// printf("DDFSD\n");
		left = NULL;
	}
	// printf("test3\n");
	if (res[0] == '\0')
		return (NULL);

	// printf("AFTER\nres is : %s\nleft is: %s\n", res, left);
	return (res);
}
