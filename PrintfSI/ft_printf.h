/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpuyo-ro <mpuyo-ro@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 13:11:39 by mpuyo-ro          #+#    #+#             */
/*   Updated: 2024/09/04 13:11:41 by mpuyo-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdint.h>

int	ft_printf(char const *string, ...);
int	ft_putstr(char *str);
int	ft_putchar(char a);
int	ft_puthex(unsigned long long n, char c);
int	ft_putnbr(int n);
int	ft_putptr(uintptr_t n);
int	ft_putunsigned(unsigned int n);

#endif
