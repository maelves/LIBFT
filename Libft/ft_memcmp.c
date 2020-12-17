/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnicoara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 14:06:00 by mnicoara          #+#    #+#             */
/*   Updated: 2017/12/28 14:06:02 by mnicoara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *idk1;
	const unsigned char *idk2;
	size_t				i;

	if (!s1 || !s2 || n == 0)
		return (0);
	idk1 = s1;
	idk2 = s2;
	i = 0;
	while (idk1[i] == idk2[i] && (i + 1) < n)
		i++;
	return (idk1 - idk2);
}
