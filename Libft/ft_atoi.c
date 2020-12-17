/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnicoara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 15:19:17 by mnicoara          #+#    #+#             */
/*   Updated: 2017/12/28 15:19:27 by mnicoara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi (const char *nptr)
{
	int		i;
	int		n;
	int		r;
	
	i = 0;
	r = 0;
	while (nptr[i] < '!')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i + 1] < '0' || nptr[i + 1] > '9')
			return (0);
		if (nptr[i] == '-')
			n = 1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
		r = r * 10 + (nptr[i++] - '0');
	if (n == 1)
		return (-r);
	else
		return (r);
}
