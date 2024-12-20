/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria <mpuyo-ro@student.42malaga.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:34:16 by maria             #+#    #+#             */
/*   Updated: 2024/11/04 16:44:38 by maria            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*extract_line(char *start)
{
	int		len;
	char	*line;

	if (!start || !start[0])
		return (NULL);
	len = 0;
	while (start[len] && start[len] != '\n')
		len++;
	if (start[len] == '\n')
		len++;
	line = (char *)malloc(sizeof(char) * (len + 1));
	if (!line)
		return (NULL);
	len = 0;
	while (start[len] && start[len] != '\n')
	{
		line[len] = start[len];
		len++;
	}
	if (start[len] == '\n')
		line[len++] = '\n';
	line[len] = '\0';
	return (line);
}

char	*update_stored(char	*stored)
{
	char	*new_buff;
	int		i;
	int		j;

	i = 0;
	while (stored[i] && stored[i] != '\n')
		i++;
	if (stored[i] == '\0')
	{
		free(stored);
		return (NULL);
	}
	i += (stored[i] == '\n');
	new_buff = (char *)malloc(sizeof(char) * (ft_strlen(stored) - i + 1));
	if (!new_buff)
		return (NULL);
	j = 0;
	while (stored[i + j])
	{
		new_buff[j] = stored[i + j];
		j++;
	}
	new_buff[j] = '\0';
	free(stored);
	return (new_buff);
}

char	*get_next_line(int fd)
{
	char		*tmp;
	int			bytes_read;
	static char	*stored;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	bytes_read = 1;
	tmp = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!tmp)
		return (NULL);
	while (!(ft_strchr(stored, '\n')) && bytes_read != 0)
	{
		bytes_read = read(fd, tmp, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(tmp);
			return (NULL);
		}
		tmp[bytes_read] = '\0';
		stored = ft_strjoin(stored, tmp);
	}
	free(tmp);
	tmp = extract_line(stored);
	stored = update_stored(stored);
	return (tmp);
}
