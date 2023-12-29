/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:04:31 by chrlomba          #+#    #+#             */
/*   Updated: 2023/12/29 19:03:12 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>

void	ft_putchar_out(char c, int *out);
void	ft_putstr_out(char *str, int *out);
int		ft_printf(const char *format, ...);
void	hex_conversion(unsigned long n, int *out, char *base);
void	point_conversion(void *ptr, int *out);
void	ft_unsigned_putnbr_out(unsigned int n, int *out);
void	ft_putnbr_out(int n, int *out);
#endif
