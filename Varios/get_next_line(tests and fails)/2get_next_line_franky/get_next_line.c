/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria <mpuyo-ro@student.42malaga.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:34:16 by maria             #+#    #+#             */
/*   Updated: 2024/11/01 13:44:52 by maria            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*extract_line(char *buffer)
{
	char	*line;
	char	*newline_pos;

	if (!buffer)
		return (NULL);
	newline_pos = ft_strchr(buffer, '\n');
	if (!newline_pos) 
	{
		// Copiamos todo el buffer si no hay salto de línea
		line = ft_strdup(buffer);
		if (line)
			line[ft_strlen(line)] = '\0';
		return (line);
	}
	// Incluye el carácter '\n' en la línea
	line = malloc((newline_pos - buffer + 2) * sizeof(char));
	if (!line)
		return (NULL);
	ft_strlcpy(line, buffer, newline_pos - buffer + 2);
	return (line);
}

char	*update_buffer(char *buffer)
{
	char	*newbuffer;
	char	*newline_pos;

	if (!buffer)
		return (NULL);
	newline_pos = ft_strchr(buffer, '\n');
	if (!newline_pos) 
	{
		free(buffer);
		return (NULL);
	}
	// Copiamos la parte posterior al salto de línea en un nuevo buffer
	newbuffer = ft_strdup(newline_pos + 1);
	if (!newbuffer)
		return (NULL);
	free(buffer);
	return (newbuffer);
}

char	*read_line(int fd, char *buffer)
{
	ssize_t	bytes_read;
	char	*temp_buffer;
	char	*new_buffer;

	if (!buffer)
		buffer = ft_strdup("");
	if (!buffer)
		return (NULL);

	temp_buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!temp_buffer)
		return (free(buffer), NULL);
	while (!ft_strchr(buffer, '\n') && (bytes_read = read(fd, temp_buffer, BUFFER_SIZE)) > 0)
	{
		temp_buffer[bytes_read] = '\0';
		new_buffer = ft_strjoin(buffer, temp_buffer);
		free(buffer);
		if (!new_buffer)
			return (free(temp_buffer), NULL);
		buffer = new_buffer;
	}
	free(temp_buffer);
	if (bytes_read == -1)
		return (free(buffer), NULL);
	return (buffer);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*buffer;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = read_line(fd, buffer);
	if (!buffer)
		return (NULL);
	line = extract_line(buffer);
	buffer = update_buffer(buffer);
	return (line);
}
