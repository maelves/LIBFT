/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnicoara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 15:05:06 by mnicoara          #+#    #+#             */
/*   Updated: 2017/12/28 15:10:49 by mnicoara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	k;
	unsigned char	*dest;
	unsigned char	*srs;
	size_t	i;

	if (!dst || !src)
		return (NULL);
	i = 0;
	k = (unsigned char)c;
	dest = (unsigned char*)dst;
	srs = (unsigned char*)src;
	while (i < n)
	{
		dest[i] = srs[i];
		if (dest[i] == k)
		{
			return (dest + i + 1);
		}
		i++;
	}
	return (0);
}
