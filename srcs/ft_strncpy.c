/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 19:46:07 by anicolas          #+#    #+#             */
/*   Updated: 2016/11/25 18:57:39 by anicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t		strlen;
	size_t		index;

	index = 0;
	strlen = ft_strlen((char*)src);
	while (index < n)
	{
		if (index > strlen)
			dst[index] = '\0';
		else
			dst[index] = src[index];
		index++;
	}
	return (dst);
}
