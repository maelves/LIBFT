/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnicoara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 14:24:36 by mnicoara          #+#    #+#             */
/*   Updated: 2017/12/28 14:24:45 by mnicoara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char	*s)
{
	int		i;
	int		k;
	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		k++;
		i++;
	}
	return (k);
}