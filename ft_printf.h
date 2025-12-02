/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnioo <hnioo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 13:10:10 by hnioo             #+#    #+#             */
/*   Updated: 2025/09/28 15:43:40 by hnioo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdlib.h>
# include <stdarg.h>
# include <string.h>
# include <unistd.h>

void	ft_putchar_fd(char c, int fd);
int		count_char(int i);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putusnbr_fd(unsigned int n, int fd);
void	ft_putlhex_fd(unsigned int n, int fd);
void	ft_putuhex_fd(unsigned int n, int fd);
void	ft_putptr_fd(unsigned long long n, int fd);
int		ft_printf(const char *format, ...);

#endif
