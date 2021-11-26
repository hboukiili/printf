/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboukili <hboukili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 23:57:17 by hboukili          #+#    #+#             */
/*   Updated: 2021/11/26 01:43:06 by hboukili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check1(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 'u')
		return (ft_putnbr2(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (ft_printhexalow(va_arg(args, unsigned int)));
	else if (c == 'X')
		return (ft_printhexaup(va_arg(args, unsigned int)));
	else if (c == 'p')
		return (ft_adress(va_arg(args, unsigned long)));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	char	*format;

	format = (char *)s;
	va_start (args, s);
	i = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (!*format)
				return (i);
			i += check1(*format, args);
		}
		else
			i += ft_putchar(*format);
		format++;
	}
	va_end (args);
	return (i);
}
