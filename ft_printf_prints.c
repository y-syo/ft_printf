/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_prints.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 03:29:07 by mmoussou          #+#    #+#             */
/*   Updated: 2023/11/15 06:05:53 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexprint(int nbr, char *base, size_t	*l)
{
	if (nbr == -2147483648)
	{
		ft_hexprint(nbr / 16, base, l);
		l += ft_putchar(base[nbr % 16]);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
		l++;
	}
	if (nbr < 16)
		l += ft_putchar(base[nbr]);
	else
	{
		ft_hexprint(nbr / 16, base, l);
		ft_putchar(base[nbr % 16]);
		l++;
	}
}

size_t	ft_nbrprint(int n)
{
	size_t	s;

	ft_putnbr(n);
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
		ft_putchar(n % 10 + '0');
		n /= 10;
		s++;
	}
	ft_putchar(n + '0');
	s++;
	return (s);
}
