/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnicoara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 14:33:02 by mnicoara          #+#    #+#             */
/*   Updated: 2017/12/28 14:33:31 by mnicoara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*fin;
	unsigned int	i;

	fin = ft_strnew(len);
	if (!(fin = ft_strnew(len)) || !s)
		return (NULL);
	i = 0;
	while (i < len)
	{
		fin[i] = s[start];
		start++;
		i++;
	}
	return (fin);
}
