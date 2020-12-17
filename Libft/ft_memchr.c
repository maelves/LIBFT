/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnicoara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 14:05:50 by mnicoara          #+#    #+#             */
/*   Updated: 2017/12/28 15:31:20 by mnicoara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*idk;
	size_t			i;

	if (!s)
		return (NULL);
	idk = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (idk[i] == (unsigned char)c)
			return (idk + i);
		i++;
	}
	return (0);
}
