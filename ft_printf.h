/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:29:18 by mmoussou          #+#    #+#             */
/*   Updated: 2023/11/15 06:05:52 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_hexprint(int nbr, char *base, size_t	*l);
size_t	ft_nbrprint(int n);
size_t	ft_unbrprint(size_t n);

int		ft_putchar(int c);
int		ft_putstr(char *s);
int		ft_isalpha(int c);
int		ft_putnbr(int n);

#endif
