/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpuyo-ro <mpuyo-ro@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 13:10:21 by mpuyo-ro          #+#    #+#             */
/*   Updated: 2024/09/04 13:10:26 by mpuyo-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putformat(char *s, va_list arg)
{
	size_t	i;

	i = 0;
	if (*s == 's')
		i += ft_putstr(va_arg(arg, char *));
	else if (*s == 'c')
		i += ft_putchar(va_arg(arg, int));
	else if (*s == 'd')
		i += ft_putnbr(va_arg(arg, int));
	else if (*s == 'i')
		i += ft_putnbr(va_arg(arg, int));
	else if (*s == 'u')
		i += ft_putunsigned(va_arg(arg, unsigned int));
	else if (*s == 'x')
		i += ft_puthex (va_arg(arg, unsigned int), 'x');
	else if (*s == 'X')
		i += ft_puthex (va_arg(arg, unsigned int), 'X');
	else if (*s == 'p')
		i += ft_putptr(va_arg(arg, uintptr_t));
	else if (*s == '%')
		i += ft_putchar('%');
	return ((int)i);
}

int	ft_printf(char const *string, ...)
{
	va_list	lst;
	int		c;

	c = 0;
	va_start(lst, string);
	while (*string != '\0')
	{
		if (*string == '%')
		{
			string++;
			c = c + ft_putformat((char *)string, lst);
			string++;
		}
		else
		{
			c += ft_putchar(*string);
			string++;
		}
	}
	va_end(lst);
	return (c);
}
