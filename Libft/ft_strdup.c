/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpuyo-ro <mpuyo-ro@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 17:33:49 by mpuyo-ro          #+#    #+#             */
/*   Updated: 2024/06/11 20:41:25 by mpuyo-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*tmp;
	size_t	size;

	size = ft_strlen(s1) + 1;
	tmp = (char *) malloc(size);
	if (tmp == NULL)
		return (NULL);
	ft_strlcpy(tmp, s1, size);
	return (tmp);
}
