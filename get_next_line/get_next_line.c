/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpuyo-ro <mpuyo-ro@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:34:16 by maria             #+#    #+#             */
/*   Updated: 2024/10/25 09:54:49 by mpuyo-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	extract_line(buffer)
{
	char 	*result;
	int 	i;
	char	*buffer;

	while (buffer[i] && buffer[i] != /n)
		i++;
	result = malloc(sizeof (char) * (i + 2))
	i = 0;
	while (buffer[i] && buffer[i] != /n)
		result[i++] == buffer[i++];
	result[i++] == '/n';
	result[i++] == '\0';
printf("Imprimiendo result de extract_line");//Quitar cuando compruebe todo
printf("%s", result);//Quitar cuando compruebe todo
	return(result);
}
char	update_buffer(buffer)
{
	int n;
	char	*store;

	while (buffer[n] && buffer[n] != /n)
		n++;
	if (buffer[n] == '/n')
		n++;
	store = malloc(sizeof(char)*(strlen(buffer) - n))//INCLUIR EN UTILS Y LLAMAR TAMBIÉN AL RESTO DE FUNCIONES (STRCHR O ASI Y TAL)
	while (buffer[n])
		store[n] == buffer[n];
		n++;
	free(buffer);
}

char	*read_line(int fd)
{
	int			bytes_read;
	static char	*buffer;
	char		*temp_buffer;

	bytes_read == 1;
	if (!buffer)
	{
		buffer = ft_strdup("");
	}
	temp_buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!temp_buffer)
		return(free(buffer), NULL);
	while (bytes_read > 0 && !ft_strchr(buffer, '/n'))
	{
		bytes_read = read(fd, temp_buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return(free(temp_buffer), NULL);
		temp_buffer[bytes_read] = 0;
		buffer = ft_strjoin(buffer, temp_buffer);
		free(temp_buffer);
	}
	return(buffer);
}



