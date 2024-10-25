/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpuyo-ro <mpuyo-ro@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:59:36 by mpuyo-ro          #+#    #+#             */
/*   Updated: 2024/10/25 16:50:08 by mpuyo-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* int	main(int argc, char **argv)
{
	int	fd;
	int	check_close;
	char	*line;

	printf("ENTRO");
	if (argc < 2)
		return (-1);
	line = NULL;
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (1);
	while(1)
	{
		line = get_next_line(fd);
		printf("%s", line);
		if (line == NULL)
			break ;
	}
	check_close = close (fd);
	if (check_close == -1)
		return (1);
	return (0);
} */
int main()
{
	int i;
	int fd = open("prueba.txt", O_RDONLY);
	char *line;
	
	i = 0;
	if (fd == -1)
		return (printf("exit"), -1);
	while ((line = get_next_line(fd)) && line != NULL)
	{
		printf("[%d] %s",i++, line);
		free(line);
	}
	close(fd);
	return (0);
}
