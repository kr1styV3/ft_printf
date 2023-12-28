/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfbinary.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:40:46 by chrlomba          #+#    #+#             */
/*   Updated: 2023/12/28 18:12:53 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	hex_conversion(unsigned long n, int *out, char *base)
{
	if (n >= 16)
		hex_conversion(n / 16, out, base);
	ft_putchar(base[n % 16], out);
}

void	point_conversion(void *ptr, int *out)
{
	unsigned long	address;
	char			*base;

	address = (unsigned long)ptr;
	base = "0123456789abcdef";
	ft_putstr("0x", out);
	hex_conversion(address, out, base);
}
