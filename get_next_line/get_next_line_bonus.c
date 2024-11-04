/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria <mpuyo-ro@student.42malaga.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:19:23 by maria             #+#    #+#             */
/*   Updated: 2024/11/04 16:46:07 by maria            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

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
	int			fd_read;
	static char	*stored[1024] = {NULL};

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	fd_read = 1;
	tmp = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!tmp)
		return (NULL);
	while (!(ft_strchr(stored[fd], '\n')) && fd_read != 0)
	{
		fd_read = read(fd, tmp, BUFFER_SIZE);
		if (fd_read == -1)
		{
			free(tmp);
			return (NULL);
		}
		tmp[fd_read] = '\0';
		stored[fd] = ft_strjoin(stored[fd], tmp);
	}
	free(tmp);
	tmp = extract_line(stored[fd]);
	stored[fd] = update_stored(stored[fd]);
	return (tmp);
}
