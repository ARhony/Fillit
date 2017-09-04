/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 16:41:56 by anicolas          #+#    #+#             */
/*   Updated: 2016/11/25 19:00:11 by anicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list	*elem))
{
	t_list	*result;
	t_list	*l1;
	t_list	*l2;

	if (!lst || !f)
		return (NULL);
	l2 = f(lst);
	if ((result = ft_lstnew(l2->content, l2->content_size)))
	{
		l1 = result;
		lst = lst->next;
		while (lst)
		{
			l2 = f(lst);
			if (((l1->next = ft_lstnew(l2->content, l2->content_size))) == NULL)
				return (NULL);
			l1 = l1->next;
			lst = lst->next;
		}
	}
	return (result);
}
