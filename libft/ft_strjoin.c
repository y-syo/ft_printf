/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 07:57:52 by mmoussou          #+#    #+#             */
/*   Updated: 2023/11/13 19:43:30 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*fstr;
	int		i;

	i = 0;
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	fstr = ft_calloc(sizeof(char), ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!fstr)
		return (NULL);
	ft_strlcpy(fstr, s1, ft_strlen(s1) + 1);
	ft_strlcat(fstr, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (fstr);
}
