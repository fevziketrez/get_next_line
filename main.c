#include "get_next_line.h"



int main(void)
{
	int fd = open("test.txt", O_CREAT | O_RDWR, 0777);
	// printf("fd is: %i\n", fd);

	// char *test_buf;
	// test_buf = malloc(1000);
	// int read_size = read(fd, test_buf, BUF_SIZE);

	// printf("read_size is: %i\n", read_size);
	// printf("test_buf is: %s\n", test_buf);

	// char *mybuf = malloc(1000);
	// int myread_size = read(fd, mybuf, 10);

	char *line = get_next_line(fd);
	printf("%s", line);
	free(line);

	line = get_next_line(fd);
	printf("%s", line);

	line = get_next_line(fd);
	printf("%s", line);

	line = get_next_line(fd);
	printf("%s", line);

	line = get_next_line(fd);
	printf("%s", line);

	// int i = 0;
	// while (line[i])
	// {
	// 	printf("%i", line[i]);
	// 	i++;
	// }

	// line = get_next_line(fd);
	// printf("\nmain.c line is:\n%s\n----\n", line);
	// free(line);

	// line = get_next_line(fd);
	// printf("\nmain.c line is:\n%s\n----\n", line);
	// free(line);

	// line = get_next_line(fd);
	// printf("\nmain.c line is:\n%s\n----\n", line);
	// free(line);

	// line = get_next_line(fd);
	// printf("\nmain.c line is:\n%s\n----\n", line);
	// free(line);

	// line = get_next_line(fd);
	// printf("\nmain.c line is:\n%s\n----\n", line);
	// free(line);

	// line = get_next_line(fd);
	// printf("\nmain.c line is:\n%s\n----\n", line);
	// free(line);
}
