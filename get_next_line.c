#include "get_next_line.h"

fd = open(fd, O_RDONLY, 0644)


char *get_next_line(int fd)
{

    read_size = read(buffer, O_RDONLY, BUF_SIZE);

	int i;

	i = 0;
	while(buffer[i] && buffer[i] != '\n')
		i++;
	// maybe if buffer[i] == \n ?? to return		AAA
	res = XXsubstr(buffer, 0, i);
	buffer = XXsubstr(buffer, i, ft_strlen(buffer));
	if (strchr(res, '\n')) ///						AAA SAME WITH UP
		return res
	else if (read_size < BUF_SIZE && !strchr(buffer, '\n') && strlen(buffer) == 0)
	{
		//BREAK END OF FILE
	}

	else if (i == read_size)
		//read again ++

}
