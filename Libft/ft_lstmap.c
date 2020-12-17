/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnicoara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 14:04:20 by mnicoara          #+#    #+#             */
/*   Updated: 2017/12/28 14:04:23 by mnicoara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*nl;
	t_list	*l;
	t_list	*idk;

	idk = (*f)(lst);
	if (!(nl = ft_lstnew(idk->content, idk->content_size)))
		return (NULL);
	lst = lst->next;
	l = nl;
	while (lst)
	{
		idk = (*f)(lst);
		l->next = ft_lstnew(idk->content, idk->content_size);
		lst = lst->next;
		l = l->next;
	}
	return (nl);
}
