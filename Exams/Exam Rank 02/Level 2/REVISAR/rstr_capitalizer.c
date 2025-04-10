/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpuyo-ro <mpuyo-ro@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:29:22 by mpuyo-ro          #+#    #+#             */
/*   Updated: 2025/04/10 12:29:34 by mpuyo-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	rcap(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t')
		{
			write(1, &str[i], 1);
			i++;
		}
		if ((str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		else if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == '\0' \
			|| str[i + 1] == ' ' || str[i + 1] == '\t'))
			str[i] = str[i] - 32;
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
		write(1, "\n", 1);
	else
	{
		while (i < argc)
		{
			rcap(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
