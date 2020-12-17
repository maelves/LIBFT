/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnicoara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 14:23:09 by mnicoara          #+#    #+#             */
/*   Updated: 2017/12/28 15:32:05 by mnicoara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *new;
	
	new = ft_strnew((ft_strlen(s1) + ft_strlen(s2)));
	if (!s1 || !s2 || !(new = ft_strnew((ft_strlen(s1) + ft_strlen(s2)))))
		return (NULL);
	new = ft_strcpy(new, s1);
	new = ft_strcat(new, s2);
	return (new);
}
