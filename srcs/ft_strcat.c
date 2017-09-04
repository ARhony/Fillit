/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 19:49:13 by anicolas          #+#    #+#             */
/*   Updated: 2016/11/16 19:34:09 by anicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strcat(char *dst, const char *src)
{
	int		index;
	int		length;

	index = 0;
	length = ft_strlen(dst);
	while (src[index])
	{
		dst[length] = src[index];
		index++;
		length++;
	}
	dst[length] = '\0';
	return (dst);
}
