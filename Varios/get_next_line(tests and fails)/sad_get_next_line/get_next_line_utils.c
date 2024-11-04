/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpuyo-ro <mpuyo-ro@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:27:44 by mpuyo-ro          #+#    #+#             */
/*   Updated: 2024/10/25 16:30:29 by mpuyo-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	if (dst == NULL && src == NULL)
	{
		return (0);
	}
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	else
	{
		i = 0;
		while (src[i] != '\0' && dst_len + i < dstsize - 1)
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[dst_len + i] = '\0';
	}
	return (dst_len + src_len);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while ((i < dstsize - 1) && (src[i] != '\0'))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

char	*ft_strjoin(char *s1, char const *s2)
{
	size_t		size1;
	size_t		size2;
	char const	*s3;

	//printf("s1: %s\n", s1);
	//printf("s2: %s\n", s2);
	if (!s1)
		s1 = malloc(sizeof (char *) * 1);
	if (!s1)
		return (NULL);
	//s1[0] = '\0';
	size1 = ft_strlen(s1) + 1;
	size2 = ft_strlen(s2) + 1;
	s3 = malloc(size1 + size2);
	if (!s3)
		return (NULL);
	ft_strlcpy((char *restrict) s3, (const char *restrict) s1, size1);
	ft_strlcat((char *)s3, s2, size1 + size2);
	//printf("s3: %s\n", s3);
	return ((char *)s3);
}

/*char	*ft_strdup(const char *s1)
{
	char	*tmp;
	size_t	size;

	size = ft_strlen(s1) + 1;
	tmp = (char *) malloc(size);
	if (tmp == NULL)
		return (NULL);
	ft_strlcpy(tmp, s1, size);
	return (tmp);
}*/

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;

	cc = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == cc)
		return ((char *)&s[i]);
	return (NULL);
}
