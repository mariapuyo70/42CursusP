/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpuyo-ro <mpuyo-ro@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:59:36 by mpuyo-ro          #+#    #+#             */
/*   Updated: 2024/10/17 16:22:33 by mpuyo-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(int argc, char ** argv)
{
	int	fd;
	int	check_open;
	int	bytes_read;
	int	check_close;

	fd = open(argv[1], O_RDONLY);
	if (fd ==-1) 
		return (1);
	bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return(1);
	check_close = close (fd);
		if (check_close == -1)
			return (1);

}
