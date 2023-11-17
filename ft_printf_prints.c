/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_prints.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 03:29:07 by mmoussou          #+#    #+#             */
/*   Updated: 2023/11/17 02:27:11 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_ptrprint(unsigned long long value, size_t *l)
{
	if (!value)
	{
		*l += write(1, "(nil)", 5);
		return ;
	}
	*l += write(1, "0x", 2);
	ft_uhexprint(value, "0123456789abcdef", l);
}

void	ft_uhexprint(unsigned long long nbr, char *base, size_t *l)
{
	if (nbr < 16)
		*l += ft_putchar(base[nbr]);
	else
	{
		ft_uhexprint(nbr / 16, base, l);
		ft_putchar(base[nbr % 16]);
		*l += 1;
	}
}

void	ft_hexprint(long long nbr, char *base, size_t *l)
{
	if (nbr == -9223372036854775807)
	{
		ft_hexprint(nbr / 16, base, l);
		*l += ft_putchar(base[nbr % 16]);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
		*l += 1;
	}
	if (nbr < 16)
		*l += ft_putchar(base[nbr]);
	else
	{
		ft_hexprint(nbr / 16, base, l);
		ft_putchar(base[nbr % 16]);
		*l += 1;
	}
}

size_t	ft_nbrprint(long long n)
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

size_t	ft_unbrprint(unsigned long long n)
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
