/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 20:06:19 by anicolas          #+#    #+#             */
/*   Updated: 2016/11/22 18:24:22 by anicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t			index;
	size_t			dst_l;

	index = 0;
	dst_l = ft_strlen(dst);
	if (dst_l < len)
		ft_strncat(dst, src, len - dst_l - 1);
	return ((dst_l < len ? dst_l : len) + ft_strlen(src));
}
