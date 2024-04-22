/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpuyo-ro <mpuyo-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:02:32 by mpuyo-ro          #+#    #+#             */
/*   Updated: 2024/04/16 18:35:52 by mpuyo-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>

/**
 * @brief	Fills the first 'n' bytes of memory area pointed by 's' with zeroes.
 *
 * @param s	The memory area to fill.
 * @param n	The number of bytes to fill.
 */
void	ft_bzero(void *s, size_t n);
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
  * @brief	Fills the first 'n' bytes of memory area pointed to by 's' with the constant byte 'c'.
  *
  * @param b	The memory area to fill
  * @param c	The constant byte to fill the memory area with.
  * @param len	The number of bytes to fill.
  *
  *@return	Memory area pointed to by 'b'.
  */
 void	ft_memset(void *b, int c, size_t len);

/**
 *@brief	Copies 'n' bytes from memory area 'src' to memory area 'dst'.
 * 			The memory areas may overlap: copying takes place as though the
 * 			bytes in 'src' are first copied into a temporary array that does
 * 			not overlap 'src' or 'dst',	and the bytes are then copied from the
 * 			temporary array to 'dst'.
 * 
 * @param dst 	The destination memory area.
 * @param src 	The source memory area.
 * @param n 	The number of bytes to copy.
 * 
 * @return	Original value of 'dst'.
 */
void	*ft_memcpy(void *dst, const void *src, size_t n);

 /**
  * @brief	Computes the length of the string 's'.
  *
  * @param s	The string to compute the lenght of.
  *
  * @return	The length of the string 's'.
  */
 size_t	ft_strlen(const char *s);

#endif
