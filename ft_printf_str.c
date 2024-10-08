/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olramazz <olramazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:04:06 by chrlomba          #+#    #+#             */
/*   Updated: 2024/01/10 16:35:39 by olramazz         ###   ########.fr       */
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
	if (str == NULL)
		return (ft_putstr_out("(null)", out));
	while (str[i] != '\0')
	{
		ft_putchar_out(str[i], out);
		i++;
	}
}
