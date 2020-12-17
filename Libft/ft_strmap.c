/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnicoara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 14:24:55 by mnicoara          #+#    #+#             */
/*   Updated: 2017/12/28 14:25:20 by mnicoara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*actual;
	unsigned int	i;

	actual = ft_strnew(ft_strlen(s));
	if (actual == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		actual[i] = f(s[i]);
		i++;
	}
	return (actual);
}
