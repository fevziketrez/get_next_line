/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fketrez <fketrez@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 03:31:34 by fketrez           #+#    #+#             */
/*   Updated: 2025/08/02 12:31:47 by fketrez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_substr(char *s, ssize_t start, ssize_t len)
{
	char	*str;
	int		i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen((char *)s))
	{
		str = (char *)ft_calloc(1, 1); //calloc
		return (str);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	str = (char *)ft_calloc(1, len + 2); //calloc
	if (str == NULL)
		return (NULL);
	i = 0;
	while (len > i)
	{
		*(str + i) = *(s + start + i);
		i++;
	}
	str[len] = '\0';
	return (str);
}

char	*ft_strjoin(char *s1, char *s2, ssize_t size )
{
	ssize_t	len;
	char	*res;
	ssize_t	i;

	len = ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1;
	i = 0;
	res = ft_calloc(len + 1, 1); //calloc
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

ssize_t	strchr_i(char *str, ssize_t i, char c)
{
	ssize_t	j;

	j = 0;
	while (str[i + j])
	{
		if (str[i + j] == c)
			return (i + j);
		j++;
	}
	return (-1);
}

void	*ft_calloc(size_t number, size_t size)
{
	void	*ptr;
	char	*str;
	size_t		i;

	ptr = malloc(number * size);
	if (!ptr)
		return (NULL);
	str = (char *)ptr;
	i = 0;
	while (i < number * size)
	{
		str[i] = 0;
		i++;
	}
	return (ptr);
}