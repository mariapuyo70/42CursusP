/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpuyo-ro <mpuyo-ro@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 20:18:54 by mpuyo-ro          #+#    #+#             */
/*   Updated: 2024/05/17 20:58:00 by mpuyo-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (count);
}

static int	get_word_len(const char *s, char c, int *index)
{
	int	len;

	len = 0;
	while (s[*index] && s[*index] != c)
	{
		(*index)++;
		len++;
	}
	return (len);
}

static char	*get_next_word(const char *s, char c, int *index)
{
	int		start;
	int		end;
	int		i;
	char	*word;

	while (s[*index] == c)
		(*index)++;
	start = *index;
	end = start + get_word_len(s, c, index);
	word = (char *)malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static void	free_matrix(char **matrix, int word_count)
{
	int	i;

	i = 0;
	while (i < word_count)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	int		i;
	int		index;
	char	**matrix;

	if (!s)
		return (NULL);
	word_count = ft_count(s, c);
	matrix = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!matrix)
		return (NULL);
	i = 0;
	index = 0;
	while (i < word_count)
	{
		matrix[i] = get_next_word(s, c, &index);
		if (!matrix[i])
		{
			free_matrix(matrix, i);
			return (NULL);
		}
		i++;
	}
	matrix[i] = NULL;
	return (matrix);
}
