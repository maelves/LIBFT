/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnicoara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 14:19:52 by mnicoara          #+#    #+#             */
/*   Updated: 2017/12/28 14:21:02 by mnicoara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*s)
{
	char	*str;
	int		i;
	int		k;
	
	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	str = (char*)malloc(sizeof(*str) * (i + 1));
	if (!str)
		return (0);
	while (s[k] !='\0')
	{
		str[k] = s[k];
		k++;
	}
	return (str);
}
