/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria <mpuyo-ro@student.42malaga.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:34:16 by maria             #+#    #+#             */
/*   Updated: 2024/10/31 14:45:08 by maria            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*extract_line(char *buffer)
{
	char	*result;
	int		i;

	result = NULL;
	i = 0;
	while (buffer[i] && buffer[i] != '\n') // 123456789\n23131
		i++;
	if (!buffer[i])
		return (buffer);
	result = malloc(sizeof (char) * (i + 2));
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		result[i] = buffer[i];
		i++;
	}
	result[i++] = '\n';
	result[i] = '\0';
	//free(buffer); //pruebas
	
//	printf("Imprimiendo result de extract_line");//Quitar cuando compruebe todo
//	printf("r:%s\n", result);//Quitar cuando compruebe todo
	return (result);
}

char	*update_buffer(char *buffer) //123456789\n\0
{
	int		n;
	int		i;
	char	*stored;

	n = 0;
	while (buffer[n] && buffer[n] != '\n')
		n++;
	if (buffer[n] == '\n')
		n++;
	if (!buffer[n])
	{
		//free(buffer);
		return (NULL);
	}
	stored = malloc(sizeof(char) * (ft_strlen(buffer) - n));
	stored[ft_strlen(buffer) - n] = '\0';
	i = 0;
	while (buffer[n])
	{
		stored[i] = buffer[n];
		n++;
		i++;
	}
	free(buffer);
	//printf("r:%s\n", stored);
	return (stored);
}

char	*read_line(int fd, char *buffer)
{
	ssize_t			bytes_read;
//	static char	*buffer;
	char		*temp_buffer;

	bytes_read = 1;
	/*
	if (!buffer)
		buffer = ft_strdup("");
	*/
	temp_buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!temp_buffer)
		return (free(buffer), free(temp_buffer), NULL);
	temp_buffer[BUFFER_SIZE] = '\0';
	while (bytes_read > 0 && !(ft_strchr(temp_buffer, '\n')))
	{
		bytes_read = read(fd, temp_buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return (free(temp_buffer), NULL);
		if (bytes_read == 0)
			return (free(temp_buffer), buffer);
		temp_buffer[bytes_read] = 0;
		buffer = ft_strjoin(buffer, temp_buffer);
	}
	free(temp_buffer);
	//printf("read: %s\n", buffer);
	return (buffer);
}

char	*get_next_line(int fd)
{
	char		*newline;
	static char	*buffer;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = read_line(fd, buffer);
	if (!buffer || buffer == NULL)
		return (NULL);
	newline = extract_line (buffer);
	buffer = update_buffer(buffer);
	return (newline);
}
