/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnioo <hnioo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 22:58:56 by hnioo             #+#    #+#             */
/*   Updated: 2025/09/28 15:01:42 by hnioo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_fd(char *s, int fd)
{
	unsigned int	idx;

	idx = 0;
	if (!s)
	{
		ft_putstr_fd("(null)", 1);
		return ;
	}
	while (s[idx])
	{
		ft_putchar_fd(s[idx], fd);
		idx++;
	}
}
