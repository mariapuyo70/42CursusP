/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpuyo-ro <mpuyo-ro@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:34:16 by maria             #+#    #+#             */
/*   Updated: 2024/10/17 17:58:33 by mpuyo-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	int		bytes_read;
	int 	i;
	char	*buffer;
	char 	*result;

	t = 0;

	bytes_read = read(fd, buffer, BUFFER_SIZE)
	if (bytes_read == -1)
		return(1);
}
char	extract_line(buffer)
{
	while (buffer[i] && buffer[i] != /n)
		i++;
	result = malloc(sizeof (char) * (i + 2))
	i = 0;
	while (buffer[i] && buffer[i] != /n)
		result[i++] == buffer[i++];
	result[i++] == '/n';
	result[i++] == '\0';
	buffer[i++] == '/n';
printf("Imprimiendo result de extract_line");
printf("%s", result);
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
	
	return(result);

