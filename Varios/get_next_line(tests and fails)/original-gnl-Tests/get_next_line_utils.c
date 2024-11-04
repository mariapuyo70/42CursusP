/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria <mpuyo-ro@student.42malaga.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:27:44 by mpuyo-ro          #+#    #+#             */
/*   Updated: 2024/11/01 12:08:55 by maria            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i]!= '\0')
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

/*char	*ft_strjoin(char *s1, char const *s2)
{
	// ft_strjoin(NULL, NULL);
	size_t		size1;
	size_t		size2;
	char		*s3;

	//printf("s1: %s\n", s1);
	//printf("s2: %s\n", s2);
	//if(!s1 && !s2)
	//	return (NULL);
	if (!s1)
		s1 = malloc(sizeof (char *) * 1);
	if (!s1)
		return (NULL);
	//if(!s2)
	//	s2 = malloc(sizeof (char *) * 1);	
	//if(!s2)
	//	return (NULL);
	//s1[0] = '\0';
	size1 = ft_strlen(s1) + 1;
	size2 = ft_strlen(s2) + 1;
	s3 = malloc(size1 + size2);
	if (!s3)
		return (free(s3), NULL);
	ft_strlcpy((char *restrict) s3, (const char *restrict) s1, size1);
	ft_strlcat((char *)s3, s2, size1 + size2);
	free(s1); //creo que esta bien porque da menos errores de memoria
	//printf("s3: %s\n", s3);
	return ((char *)s3);
}*/

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	size1;
	size_t	size2;
	char	*tmp;
	
	if(!s1)
	{
		s1 = (char *) malloc(1 * sizeof(char));
		s1[0] = '\0';
	}
	if(!s1 || !s2)
		return (NULL);
	tmp = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (tmp == NULL)
		return (NULL);
	size1 = -1;
	size2 = 0;
	if(s1)
	{
		while(s1[size1++] != '\0')
			tmp[size1] = s1[size1];
	}
	while(s2[size2] != '\0')
	{
		tmp[size1++] = s2[size2++];
	}
	tmp[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free(s1);
	return (tmp);
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
