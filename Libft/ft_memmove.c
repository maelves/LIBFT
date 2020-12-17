/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnicoara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 14:06:32 by mnicoara          #+#    #+#             */
/*   Updated: 2017/12/28 14:06:33 by mnicoara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*srs;
	unsigned char	*dest;
	unsigned char	idk[n];

	i = 0;
	srs = (unsigned char *)src;
	dest = (unsigned char *)dst;
	while (i < n)
	{
		idk[i] = srs[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		dest[i] = idk[i];
		i++;
	}
	return (dst);
}
