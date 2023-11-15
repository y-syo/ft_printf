/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:29:18 by mmoussou          #+#    #+#             */
/*   Updated: 2023/11/15 03:32:09 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

int		ft_printf(const char *str, ...);
size_t	ft_strprint(char *str);
void	ft_hexprint(size_t nbr, char *base, size_t	*l);
size_t	ft_nbrprint(int n);
size_t	ft_unbrprint(size_t n);

#endif
