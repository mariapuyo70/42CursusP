/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpuyo-ro <mpuyo-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:02:32 by mpuyo-ro          #+#    #+#             */
/*   Updated: 2024/04/15 19:17:09 by mpuyo-ro         ###   ########.fr       */
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
 * @brief	Checks if the passed character is an ASCII character.
 *
 * @param c	The character to check.
 *
 * @return	1 if the character is an ASCII character;
 * 			0 otherwise.
 */
int	ft_isascii(int c);

/**
 * @brief	Checks if the passed character is a digit.
 *
 * @param c	The character to check.
 *
 * @return	1 if the character is a digit;
 * 			0 otherwise.
 */
 int	ft_isdigit(int c);

/**
 * @brief	Checks if the passed character is a printable character
 *
 * @param c	The character to check
 *
 * @return	1 if the character is a printable character;
 * 			0 otherwise
 */
 int	ft_isprint(int c);

 /**
  * @brief	Computes the length of the string 's'.
  *
  * @param s	The string to compute the lenght of.
  *
  * @return	The length of the string 's'.
  */
 size_t	ft_strlen(const char *s);

#endif
