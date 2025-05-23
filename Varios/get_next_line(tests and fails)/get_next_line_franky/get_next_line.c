/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria <mpuyo-ro@student.42malaga.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:34:16 by maria             #+#    #+#             */
/*   Updated: 2024/11/01 13:10:18 by maria            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "get_next_line.h"

char	*extract_line(char *buffer)
{
	char	*line;
	char	*newline_pos;

	if (!buffer)
		return (NULL); // Verificación adicional para evitar segfaults
	newline_pos = ft_strchr(buffer, '\n');
	if (!newline_pos)
		return (ft_strdup(buffer));
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
		return (NULL); // Verificación adicional para evitar segfaults
	newline_pos = ft_strchr(buffer, '\n');
	if (!newline_pos)
	{
		free(buffer);
		return (NULL);
	}
	newbuffer = ft_strdup(newline_pos + 1);
	free(buffer);
	return (newbuffer);
}

char	*read_line(int fd, char *buffer)
{
	ssize_t	bytes_read;
	char	*temp_buffer;
	char	*new_buffer;

	if (!buffer) // Inicialización en primera línea
		buffer = ft_strdup("");
	if (!buffer) // Esto lo puse para verificar si strdup falla
		return (NULL);

	temp_buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!temp_buffer)
		return (free(buffer), NULL);
	while (!ft_strchr(buffer, '\n'))
	{
		bytes_read = read(fd, temp_buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return (free(temp_buffer), free(buffer), NULL);
		if (bytes_read == 0)
			break;
		temp_buffer[bytes_read] = '\0';
		new_buffer = ft_strjoin(buffer, temp_buffer);
		free(buffer);
		if (!new_buffer)
			return (free(temp_buffer), NULL);
		buffer = new_buffer;
	}
	free(temp_buffer);
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
}*/
// get_next_line.c


//ESTE ES EL FRANKY1
/*
#include "get_next_line.h"

char	*extract_line(char *buffer)
{
	char	*line;
	char	*newline_pos;

	if (!buffer)
		return (NULL); // Verificación adicional para evitar segfaults
	newline_pos = ft_strchr(buffer, '\n');
	if (!newline_pos) 
	{
		// Copiamos todo el buffer si no hay salto de línea
		line = ft_strdup(buffer);
		if (line)
			line[ft_strlen(line)] = '\0';  // Asegura el carácter nulo
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
		return (NULL); // Verificación adicional para evitar segfaults
	newline_pos = ft_strchr(buffer, '\n');
	if (!newline_pos) {
		// Si no hay salto de línea, liberamos el buffer y lo devolvemos como NULL
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

	if (!buffer) // Inicialización en primera línea
		buffer = ft_strdup("");
	if (!buffer) // Verificación si strdup falla
		return (NULL);

	temp_buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!temp_buffer)
		return (free(buffer), NULL);
	while (!ft_strchr(buffer, '\n') && (bytes_read = read(fd, temp_buffer, BUFFER_SIZE)) != 0)
	{
		if (bytes_read == -1)
			return (free(temp_buffer), free(buffer), NULL);
		temp_buffer[bytes_read] = '\0';
		new_buffer = ft_strjoin(buffer, temp_buffer);
		free(buffer);
		if (!new_buffer)
			return (free(temp_buffer), NULL);
		buffer = new_buffer;
	}
	free(temp_buffer);
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
*/
// FRANKY2

#include "get_next_line.h"
#include <stdlib.h> // Para malloc, free
#include <unistd.h> // Para read

static char	*ft_strdup(const char *s)
{
	size_t	len = ft_strlen(s);
	char	*dup = malloc((len + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s, len + 1);
	return (dup);
}

char	*extract_line(char *buffer)
{
	char	*line;
	char	*newline_pos;

	if (!buffer)
		return (NULL);
	newline_pos = ft_strchr(buffer, '\n');
	if (!newline_pos) 
	{
		line = ft_strdup(buffer);
		if (line)
			line[ft_strlen(line)] = '\0';
		return (line);
	}
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
	newbuffer = ft_strdup(newline_pos + 1);
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
	if (bytes_read < 0)
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
