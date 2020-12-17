/* ************************************************************************** *//*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnicoara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 14:32:26 by mnicoara          #+#    #+#             */
/*   Updated: 2017/12/28 15:48:45 by mnicoara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordlen(char const *s, char c, int i)
{
	size_t k;

	k = 0;
	while (s[i] && s[i] != c)
	{
		k++;
		i++;
	}
	return (k);
}

static int	ft_kont(char const *s, char c)
{
	int i;
	int ko;
	int k;

	i = 0;
	k = 0;
	while (s[i])
	{
		ko = 1;
		while (s[i] && s[i] == c)
		{
			ko = 0;
			i++;
		}
		while (s[i] && s[i] != c)
		{
			i++;
			ko = 1;
		}
		if (ko)
			k++;
	}
	return (k);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**str;
	size_t	l;
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	l = 0;
	if (!s)
		return (NULL);
	l = ft_kont(s, c);
	if (!(str = (char**)malloc(sizeof(*str) * (l + 1))))
		return (NULL);
	i = 0;
	while (l > 0)
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		str[k] = ft_strsub(s, i, ft_wordlen(s, c, i));
		k++;
		i = i + ft_wordlen(s, c, i);
		l--;
	}
	str[k] = 0;
	return (str);
}
