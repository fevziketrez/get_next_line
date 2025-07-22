#include "get_next_line.h"

int	ft_strlen(char const *str)
{
	int	i;
	if (!str)
		return (0);

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr1;
	const unsigned char	*ptr2;

	ptr1 = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	if (!dest && !src)
		return (dest);
	while (n-- > 0)
		*(ptr1++) = *(ptr2++);
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	if (start >= (unsigned int)ft_strlen((char *)s))
	{
		str = (char *)malloc(1);
		if (str == NULL)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	if (len > ft_strlen(s) - start)
	{
		len = ft_strlen(s) - start;
	}
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, &s[start], len);
	str[len + 1] = '\0';
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*res;
	size_t	i;

	len = ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1;
	i = 0;
	res = calloc(len + 1, 1);
	if (!res)
		return (NULL);

	while (s1 && s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	len = 0;
	while (s2 && s2[len])
	{
		res[i] = s2[len];
		len++;
		i++;
	}
	res[i] = '\0';
	return (res);
}


int strchr_i (char *str, int i, char c)
{

	char *ptr = &(str[i]);
	int j = 0;
	while (ptr[j])
	{
		if (ptr[j] == c)
			return (i + j);
		j++;
	}
	return (-1);
}
