/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnicoara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 14:25:52 by mnicoara          #+#    #+#             */
/*   Updated: 2017/12/28 14:26:51 by mnicoara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int		i;
	size_t	j;
	char	*str1;
	char	*str2;

	if (!dest || !src)
		return (NULL);
	str1 = (char*)dest;
	str2 = (char*)src;
	i = 0;
	j = 0;
	while (str1[i] != '\0')
		i++;
	while (str2[j] != '\0' && j < n)
	{
		str1[i] = str2[j];
		j++;
		i++;
	}
	str1[i] = '\0';
	return (str1);
}
