/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 20:06:55 by anicolas          #+#    #+#             */
/*   Updated: 2016/11/22 21:33:35 by anicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	index;
	char	*rt_s;

	index = 0;
	if (!s)
		return (NULL);
	if ((rt_s = (char *)malloc(sizeof(char) * len + 1)) == NULL)
		return (NULL);
	while (index < len)
	{
		rt_s[index] = s[start];
		index++;
		start++;
	}
	rt_s[index] = '\0';
	return (rt_s);
}
