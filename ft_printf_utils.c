/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olramazz <olramazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:04:06 by chrlomba          #+#    #+#             */
/*   Updated: 2023/12/28 18:18:53 by olramazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_out(char c, int *out)
{
	*out += (int )write(1, &c, 1);
}

void	ft_putstr_out(char *str, int *out)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar_out(str[i], out);
		i++;
	}
}

void	ft_putnbr_out(int n, int *out)
{
	if (out == NULL)
		return ;
	if (n == -2147483648)
	{
		ft_putstr_out("-2147483648", out);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_out('-', out);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_out(n / 10, out);
	}
	ft_putchar_out((n % 10) + '0', out);
}
