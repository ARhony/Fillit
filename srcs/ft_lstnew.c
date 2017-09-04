/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 17:16:34 by anicolas          #+#    #+#             */
/*   Updated: 2016/11/25 19:10:53 by anicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list_1;

	if ((list_1 = (t_list *)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	if (content == NULL)
	{
		list_1->content = NULL;
		list_1->content_size = 0;
	}
	else
	{
		if ((list_1->content = ft_memalloc(content_size)) == NULL)
			return (NULL);
		list_1->content = ft_memcpy(list_1->content, content, content_size);
		list_1->content_size = content_size;
	}
	list_1->next = NULL;
	return (list_1);
}
