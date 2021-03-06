/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnicoara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 13:59:15 by mnicoara          #+#    #+#             */
/*   Updated: 2017/12/28 13:59:38 by mnicoara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*idk;
	size_t	i;

	idk = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		idk[i] = '\0';
		i++;
	}
}
