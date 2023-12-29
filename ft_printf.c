/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 17:42:32 by chrlomba          #+#    #+#             */
/*   Updated: 2023/12/29 19:47:35 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	check_format(char id, int *out, va_list ap)
{
	if (id == 'c')
		ft_putchar_out(va_arg(ap, int), out);
	else if (id == 's')
		ft_putstr_out(va_arg(ap, char *), out);
	else if (id == 'p')
		point_conversion(va_arg(ap, void *), out);
	else if (id == 'i' || id == 'd')
		ft_putnbr_out(va_arg(ap, int), out);
	else if (id == 'u')
		ft_unsigned_putnbr_out(va_arg(ap, unsigned int), out);
	else if (id == 'x')
		hex_conversion(va_arg(ap, unsigned long), out, "0123456789abcdef");
	else if (id == 'X')
		hex_conversion(va_arg(ap, unsigned long), out, "0123456789ABCDEF");
	else if (id == '%')
		ft_putchar_out('%', out);
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
		ft_putchar_out(format[i], &out);
		i++;
	}
	va_end(ap);
	return (out);
}

// int	main(void)
// {
// 	unsigned long	res;
// 	char	*memory;

// 	memory = "memory";

// 	res = printf("ciao funzioni da, %p\n", memory);
// 	printf("i caraterri stampati sono %li", res);
// 	return (0);
// }
