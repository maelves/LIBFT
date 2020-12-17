/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnicoara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 14:31:33 by mnicoara          #+#    #+#             */
/*   Updated: 2017/12/28 14:32:05 by mnicoara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 char	*ft_strrev(char *str)
 {
 	char	*strrev;
 	int		i;
 	int		k;

 	i = ft_strlen(str);
 	k = 0;
 	strrev = (char *)malloc(sizeof(char) * (i + 1));
 	if (strrev == NULL)
 		return (NULL);
 	while (i >= 0)
 	{
 		strrev[k] = str[i];
		k++;
		i--;
 	}
 	strrev[k] = '\0';
 	return (strrev);
 }
