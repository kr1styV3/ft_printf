/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 17:42:32 by chrlomba          #+#    #+#             */
/*   Updated: 2023/12/28 17:28:24 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	check_format(char id, int *out, va_list ap)
{
	if (id == 'c')
		ft_putchar(va_arg(ap, char), out);
	else if (id == 's')
		ft_putstr(va_arg(ap, char *), out);
		// 		TODO./
	// else if (id == 'p') 
	// 	point_conversion(va_arg(ap, void *), out);
	// else if (id == 'i' || id == 'd')
	// 	ft_putnbr(va_arg(ap, int), out);
	// else if (id == 'u')
	// 	ft_unsigned_putnbr(va_arg(ap, unsigned int), out);
	// else if (id == 'x')
	// 	hex_conversion(va_arg(ap, unsigned long), out, "0123456789abcdef");
	// else if (id == 'x')
	// 	hex_conversion(va_arg(ap, unsigned long), out, "0123456789ABCDEF");
	else if (id == '%')
		ft_putchar('%', out);
	return (2);
}

int	ft_printf(const char *format, ...)
{
	int			out;
	int			i;
	va_list		ap;

	i = 0;
	out = 0;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
			i += check_format(format[i + 1], &out, ap);
		ft_putchar(format[i], &out);
		i++;
	}
	return (out);
}

int	main(void)
{
	int	res;

	res = ft_printf("ciao funzioni da, %s\n", "christian");
	printf("i caraterri stampati sono %i", res);
	return (0);
}
