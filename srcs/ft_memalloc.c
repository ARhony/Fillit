/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 18:25:21 by anicolas          #+#    #+#             */
/*   Updated: 2016/11/22 15:22:21 by anicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memalloc(size_t size)
{
	void	*rt_mem;

	if ((rt_mem = malloc(sizeof(void*) * size)) == NULL)
		return (NULL);
	ft_memset(rt_mem, 0, size);
	return (rt_mem);
}
