/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:46:39 by mmoussou          #+#    #+#             */
/*   Updated: 2023/11/15 03:48:49 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printchar(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

static void	print_arg(va_list argsl, char type, size_t *l)
{
	if (type == 'c')
		l += ft_printchar(va_arg(argsl, int));
	if (type == 's')
		l += ft_strprint(va_arg(argsl, char *));
	if (type == 'p')
		ft_hexprint(va_arg(argsl, size_t), "0123456789ABCDEF", l);
	if (type == 'd' || type == 'i')
		l += ft_nbrprint(va_arg(argsl, int));
	if (type == 'u')
		l += ft_unbrprint(va_arg(argsl, unsigned int));
	if (type == 'x')
		ft_hexprint(va_arg(argsl, int), "0123456789abcdef", l);
	if (type == 'X')
		ft_hexprint(va_arg(argsl, int), "0123456789ABCDEF", l);
	else
	{
		ft_putchar_fd('%', 1);
		if (!ft_isalpha(type))
		{
			ft_putchar_fd(type, 1);
			l++;
		}
		l++;
	}
}

int	ft_printf(const char *str, ...)
{
	va_list	argsl;
	size_t	i;
	size_t	l;

	if (!str)
		return (0);
	va_start(argsl, str);
	i = 0;
	l = 0;
	while (str[i])
	{
		if (str[i] == '%')
			print_arg(argsl, str[++i], &l);
		else
		{
			ft_putchar_fd(str[i], 1);
			l++;
		}
		i++;
	}
	va_end(argsl);
	return (l);
}
