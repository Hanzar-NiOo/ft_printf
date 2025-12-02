/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnioo <hnioo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 22:06:28 by hnioo             #+#    #+#             */
/*   Updated: 2025/09/28 15:59:48 by hnioo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print_num_fd(unsigned long long num, int fd)
{
	unsigned int		idx;
	unsigned char		hex;

	if (num > 15)
		print_num_fd(num / 16, fd);
	idx = num % 16;
	hex = (unsigned char)"0123456789abcdef"[idx];
	ft_putchar_fd(hex, fd);
}

void	ft_putptr_fd(unsigned long long n, int fd)
{
	if (!n)
		ft_putstr_fd("(nil)", fd);
	else
	{
		ft_putstr_fd("0x", fd);
		print_num_fd(n, fd);
	}
}
