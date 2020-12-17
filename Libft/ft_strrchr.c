/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnicoara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 14:30:17 by mnicoara          #+#    #+#             */
/*   Updated: 2017/12/28 15:45:28 by mnicoara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		n;
	int		k;

	str = (char*)s;
	k = 0;
	if (str)
	{
		n = ft_strlen(str);
		while (k < (int)n)
		{
			k++;
			str++;
		}
		while (k >= 0)
		{
			if (str[0] == (char)c)
				return (str);
			str--;
			k--;
		}
	}
	return (0);
}
