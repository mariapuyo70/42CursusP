/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpuyo-ro <mpuyo-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:02:32 by mpuyo-ro          #+#    #+#             */
/*   Updated: 2024/04/15 18:09:30 by mpuyo-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>

/**
 * @brief	Checks if the passed character is an alnumeric character
 *
 * @param c	The character to check
 *
 * @return	1 if the character is an alphanumeric character;
 * 			0 otherwise.
 */
int	ft_isalnum(int c);

/**
 * @brief	Checks if the passed character is an alphabetic character.
 *
 * @param c	The character to check. 
 *
 * @return	1 if the character is an alphabetic character;
 * 			0 otherwise.
 */
int	ft_isalpha(int c);

/**
 * @brief	Checks if the passed character is a digit.
 *
 * @param c	The character to check.
 *
 * @return	1 if the character is a digit;
 * 			0 otherwise.
 */
 int	ft_isdigit(int c);

#endif
