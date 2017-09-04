/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 18:39:55 by anicolas          #+#    #+#             */
/*   Updated: 2016/11/24 01:56:08 by anicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strdup(const char *s1)
{
	char	*rt_strdup;
	int		index;

	index = 0;
	while (s1[index])
		index++;
	if ((rt_strdup = (char *)malloc(index * sizeof(char) + 1)) == NULL)
		return (NULL);
	if (rt_strdup != NULL)
	{
		index = 0;
		while (s1[index])
		{
			rt_strdup[index] = s1[index];
			index++;
		}
	}
	rt_strdup[index] = '\0';
	return (rt_strdup);
}
