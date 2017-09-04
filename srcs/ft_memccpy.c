/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 17:00:10 by anicolas          #+#    #+#             */
/*   Updated: 2016/11/24 01:51:43 by anicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst_unsgn;
	unsigned char	*src_unsgn;
	unsigned char	c_unsgn;

	dst_unsgn = (unsigned char *)dst;
	src_unsgn = (unsigned char *)src;
	c_unsgn = (unsigned char)c;
	if (n == 0)
		return (NULL);
	while (*src_unsgn != c_unsgn && n > 0)
	{
		*dst_unsgn++ = *src_unsgn++;
		n--;
	}
	if (n > 0)
	{
		*dst_unsgn++ = *src_unsgn++;
		return (dst_unsgn);
	}
	return (NULL);
}
