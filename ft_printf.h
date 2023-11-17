/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:29:18 by mmoussou          #+#    #+#             */
/*   Updated: 2023/11/17 02:00:51 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_hexprint(long long nbr, char *base, size_t	*l);
size_t	ft_nbrprint(long long n);
size_t	ft_unbrprint(unsigned long long n);
void	ft_ptrprint(unsigned long long value, size_t *l);
void	ft_uhexprint(unsigned long long nbr, char *base, size_t *l);

int		ft_putchar(int c);
int		ft_putstr(char *s);
int		ft_isalpha(int c);
int		ft_putnbr(long long n);

#endif
