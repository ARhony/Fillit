/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 18:42:05 by anicolas          #+#    #+#             */
/*   Updated: 2016/11/26 18:44:20 by anicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strnew(size_t size)
{
	size_t	index;
	char	*rt_str;

	index = 0;
	if ((rt_str = (char*)malloc(sizeof(char) * size + 1)) == NULL)
		return (NULL);
	while (index < size)
	{
		rt_str[index] = '\0';
		index++;
	}
	rt_str[index] = '\0';
	return (rt_str);
}
