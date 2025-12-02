/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuhex_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnioo <hnioo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 20:57:48 by hnioo             #+#    #+#             */
/*   Updated: 2025/09/28 15:35:14 by hnioo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuhex_fd( unsigned int n, int fd)
{
	char	hex;
	int		idx;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n > 15)
		ft_putuhex_fd(n / 16, fd);
	idx = n % 16;
	hex = (char)"0123456789ABCDEF"[idx];
	ft_putchar_fd(hex, fd);
}
