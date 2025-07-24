#include "get_next_line.h"



int main(void)
{
	ssize_t fd = open("test.txt", O_RDONLY, 0777);

	char *line;
	while (line)
	{
		line = get_next_line(fd);
		printf("%s", line);
		free(line);
	}
}
