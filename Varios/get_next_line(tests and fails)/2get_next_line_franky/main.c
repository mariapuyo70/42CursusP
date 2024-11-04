/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria <mpuyo-ro@student.42malaga.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:59:36 by mpuyo-ro          #+#    #+#             */
/*   Updated: 2024/10/29 18:21:16 by maria            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
int main()
{
	int i;
	int fd = open("prueba.txt", O_RDONLY);
	char *line = NULL;
	
	i = 0;
	if (fd == -1)
		return (printf("exit"), -1);
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("[%d] %s", i++, line);
		free(line);
	}
	close(fd);
	return (0);
}
