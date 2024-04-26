/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpuyo-ro <mpuyo-ro@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 20:21:14 by mpuyo-ro          #+#    #+#             */
/*   Updated: 2024/04/26 20:34:45 by mpuyo-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		s_len;
	char	t;

	i = 0;
	s_len = ft_strlen(s);
	t = NULL;
	while (i <= s_len)
	{
		if (s[i] == c && c != '\0')
		{
			t = &s[i];
		}
		i++;
		return (t);
	}
}