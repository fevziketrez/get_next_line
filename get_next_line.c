#include "get_next_line.h"

char *get_next_line(int fd)
{
	char *read_buf = calloc(BUFFER_SIZE + 1, 1);
	int read_size;
	char *res;
	char *temp;
	static char *left;
	// printf("test1 AAAAA\n");
	res = left;
	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	// printf("CCC\n");
	read_size = 1;
	// printf("DDD\n");
	while (strchr_i(read_buf, 0, '\n') == -1 && read_size > 0) // null görmediğin sürece ve okuma ok
	{
		read_size = read(fd, read_buf, BUFFER_SIZE);
		//printf("buf was: %s, readsize is: %i\n", read_buf, read_size);
		printf("BBB\n");
		temp = ft_strjoin(res, read_buf, read_size);
		free(res);
		res = temp;
		// printf("res is: %s\n", res);
		//  printf("X: char value: '%i'\n", res[ft_strlen(res) - 1]);
	}
	// printf("XXX\n");
	free(read_buf);
	// printf("YYY\n");
	// printf("BEFORE\nres is : %s\nleft is: %s\n", res, left);
	if (strchr_i(res, 0, '\n') != -1)
	{
		// printf("SKDFS\n");
		// free(left);
		left = ft_substr(res, strchr_i(res, 0, '\n') + 1, ft_strlen(res));
		// printf("YYYY\n");
		//  res = ft_substr(res, 0, strchr_i(res, 0, '\n') + 1); /// substr index 1. arg included 2 excluded
		res[strchr_i(res, 0, '\n') + 1] = '\0'; /// substr index 1. arg included 2 excluded
	}
	// else
	// {
	// 	// printf("DDFSD\n");
	// 	// if (left)

	// 	// // free(res);
	// 	// return (NULL);
	// }
	if (left[0] == '\0')
	{
		free(left);
		left = NULL;
	}//printf("test3\n");
	if (res[0] == '\0')
		return (NULL);
	// free(temp);
	// printf("!43!\n");
	//  printf("AFTER\nres is : %s\nleft is: %s\n", res, left);
	return (res);
}
