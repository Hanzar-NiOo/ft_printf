/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnioo <hnioo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 16:01:36 by hnioo             #+#    #+#             */
/*   Updated: 2025/09/28 16:22:58 by hnioo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count_char(int i)
{
	static int	count = 0;

	if (i == 1)
		count++;
	else
		count = 0;
	return (count);
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	count_char(1);
}
