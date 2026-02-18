/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnioo <hnioo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 14:28:52 by hnioo             #+#    #+#             */
/*   Updated: 2025/10/28 01:07:53 by hnioo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	handle_format(char c, va_list args)
{
	if (c == 'c')
		ft_putchar_fd(va_arg(args, int), 1);
	if (c == 's')
		ft_putstr_fd(va_arg(args, char *), 1);
	if (c == 'p')
		ft_putptr_fd(va_arg(args, unsigned long long), 1);
	if (c == 'i' || c == 'd')
		ft_putnbr_fd(va_arg(args, int), 1);
	if (c == 'u')
		ft_putusnbr_fd(va_arg(args, unsigned int), 1);
	if (c == 'x')
		ft_putlhex_fd(va_arg(args, int), 1);
	if (c == 'X')
		ft_putuhex_fd(va_arg(args, int), 1);
	if (c == '%')
		ft_putchar_fd('%', 1);
}

int	ft_printf(const char *format, ...)
{
	unsigned int	idx;
	va_list			args;
	int				count;

	count = count_char(0);
	va_start(args, format);
	idx = -1;
	if (!format)
		return (0);
	while (format[++idx])
	{
		if (format[idx] == '%')
		{
			idx++;
			if (format[idx])
				handle_format(format[idx], args);
		}
		else
			ft_putchar_fd(format[idx], 1);
	}
	va_end(args);
	count = count_char(1) - 1;
	return (count);
}
