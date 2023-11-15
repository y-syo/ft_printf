/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_prints.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 03:29:07 by mmoussou          #+#    #+#             */
/*   Updated: 2023/11/15 03:32:14 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strprint(char *str)
{
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

void	ft_hexprint(size_t nbr, char *base, size_t	*l)
{
	if (nbr == -2147483648)
	{
		ft_hexprint(nbr / 16, base, l);
		ft_putchar_fd(base[nbr % 16], 1);
		l++;
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
		l++;
	}
	if (nbr < 16)
	{
		ft_putchar_fd(base[nbr], 1);
		l++;
	}
	else
	{
		ft_hexprint(nbr / 16, base, l);
		ft_putchar_fd(base[nbr % 16], 1);
		l++;
	}
}

size_t	ft_nbrprint(int n)
{
	size_t	s;

	ft_putnbr_fd(n, 1);
	s = 0;
	if (n <= 0)
	{
		s++;
		n *= -1;
	}
	while (n >= 1)
	{
		s++;
		n /= 10;
	}
	return (s);
}

size_t	ft_unbrprint(size_t n)
{
	size_t	s;

	while (n > 9)
	{
		ft_putchar_fd(n % 10 + '0', 1);
		n /= 10;
		s++;
	}
	ft_putchar_fd(n + '0', 1);
	s++;
	return (s);
}
