/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnicoara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 14:06:41 by mnicoara          #+#    #+#             */
/*   Updated: 2017/12/28 14:06:43 by mnicoara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int src, size_t len)
{
	size_t			i;
	unsigned char	*idk;

	idk = (unsigned char *)str;
	i = 0;
	while (i < len)
	{
		idk[i] = (unsigned char)src;
		i++;
	}
	return (str);
}
