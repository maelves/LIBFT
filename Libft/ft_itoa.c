/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnicoara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 14:01:36 by mnicoara          #+#    #+#             */
/*   Updated: 2017/12/28 14:01:38 by mnicoara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countchars(int n)
{
	int i;

	i = 0;
	if (n == 0)
		i++;
	else if (n < 0)
		i++;
	else
	{
		while (n > 0)
		{
			i++;
			n /= 10;
		}
	}
	return (i);
}

char		*ft_itoa(int n)
{
	int				i;
	unsigned int	x;
	int				k;
	char			*s;

	s = ft_strnew(ft_countchars(n));
	x = n;
	if ((k = n) < 0)
		x = -n;
	i = 0;
	if (x == 0)
		s[i++] = '0';
	while (x > 0)
	{
		s[i++] = x % 10 + '0';
		x /= 10;
	}
	if (k < 0)
		s[i++] = '-';
	s[i] = '\0';
	ft_strrev(s);
	return (s);
}
