/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpuyo-ro <mpuyo-ro@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:15:00 by mpuyo-ro          #+#    #+#             */
/*   Updated: 2024/05/17 16:15:03 by mpuyo-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		size1;
	size_t		size2;
	char const	*s3;

	size1 = ft_strlen(s1) + 1;
	size2 = ft_strlen(s2) + 1;
	s3 = malloc(size1 + size2);
	if (!s3)
		return (NULL);
	ft_strlcpy((char *restrict) s3, (const char *restrict) s1, size1);
	ft_strlcat((char *)s3, s2, size1 + size2);
	return ((char *)s3);
}
