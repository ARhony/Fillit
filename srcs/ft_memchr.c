/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 23:44:21 by anicolas          #+#    #+#             */
/*   Updated: 2016/11/17 23:25:28 by anicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				index;
	unsigned char		*s_unsgn;

	s_unsgn = (unsigned char *)s;
	index = 0;
	while (index < n)
	{
		if (s_unsgn[index] == (unsigned char)c)
			return (s_unsgn + index);
		index++;
	}
	return (0);
}
