/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:04:06 by chrlomba          #+#    #+#             */
/*   Updated: 2023/12/09 13:45:44 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *out)
{
	*out += (int )write(1, &c, 1);
}

void	ft_putstr(char *str, int *out)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i], out);
		i++;
	}
}

void	ft_putnbr(int n, int *out)
{
	int	nl;

	nl = n;
	if (nl < 0)
		nl *= -1;
	if (nl > 
}
