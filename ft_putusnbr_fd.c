/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putusnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnioo <hnioo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 13:13:37 by hnioo             #+#    #+#             */
/*   Updated: 2025/09/28 15:29:29 by hnioo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putusnbr_fd(unsigned int n, int fd)
{
	char	digit;

	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	digit = (n % 10) + '0';
	ft_putchar_fd(digit, fd);
}
