/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpuyo-ro <mpuyo-ro@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:16:34 by mpuyo-ro          #+#    #+#             */
/*   Updated: 2024/05/17 20:07:11 by mpuyo-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c);


int	ft_count(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i] == c) || s[i] == '\0')
			j++;
		i++;
	}
	return (j);
}

int	ft_len(char const *s, char c, int *index)
{
	char	*substr;
	int		i;
	int		start;
	int		end;

	i = 0;
	substr = (char *)malloc()
	while (s[i + end] != c)
	{
		substr[j] = s[i + end];
		j++;
		i++;
		end = i;
	}
	return (substr);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**matrix;

	if (!s)
		return (NULL);

	i = ft_count(s, c);
	j = 0;
	matrix = (char **)malloc(sizeof(char *) * ft_count(s, c) + 1);
	if (!matrix)
		return (NULL);
	while (j <= i)
	{
		matrix[j] = ft_len(s, c);
		if (!matrix[j])
		{
			while (j > 0)
				free(matrix[--1]);
			free(matrix);
			return (NULL);
		}
		j++;
	}
	matrix[j] = NULL;
	return (matrix);
}
