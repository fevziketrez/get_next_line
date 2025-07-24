#include "get_next_line.h"

ssize_t	ft_strlen(char *str)
{
	ssize_t	i;

	if (!str || !*str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	*ft_memcpy(void *dest, void *src, ssize_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	ssize_t					i;

	ptr1 = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	i = 0;
	if (!dest && !src)
		return (dest);
	while (n-- > 0)
	{
		*(ptr1 + i) = *(ptr2 + i);
		i++;
	}
	return (dest);
}

char	*ft_substr(char *s, ssize_t start, ssize_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	if (start >= ft_strlen((char *)s))
	{
		str = (char *)calloc(1, 1);
		if (str == NULL)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	if (len > ft_strlen(s) - start)
	{
		len = ft_strlen(s) - start;
	}
	str = (char *)calloc(1, len + 2);
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, &s[start], len);

	str[len + 1] = '\0';
	return (str);
}

char	*ft_strjoin(char *s1, char *s2, ssize_t size )
{
	ssize_t	len;
	char	*res;
	ssize_t	i;

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
	while (s2 && s2[len] && len < size)
	{
		res[i] = s2[len];
		len++;
		i++;
	}
	res[i] = '\0';
	return (res);
}

ssize_t	strchr_i (char *str, ssize_t i, char c)
{

	ssize_t j = 0;
	while (str[i + j])
	{
		if (str[i + j] == c)
			return (i + j);
		j++;
	}
	return (-1);
}