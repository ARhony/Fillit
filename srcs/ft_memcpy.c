/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 16:10:27 by anicolas          #+#    #+#             */
/*   Updated: 2016/11/25 18:56:37 by anicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char		*src_unsgn;
	char			*dst_unsgn;
	unsigned int	index;

	dst_unsgn = (char *)dst;
	src_unsgn = (const char *)src;
	index = 0;
	while (index < n)
	{
		dst_unsgn[index] = src_unsgn[index];
		index++;
	}
	return (dst_unsgn);
}
