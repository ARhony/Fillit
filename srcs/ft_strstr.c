/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 18:19:40 by anicolas          #+#    #+#             */
/*   Updated: 2016/11/25 20:21:51 by anicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static int	ft_islittleinbig(const char *big, const char *little, int index)
{
	int	index_s;

	index_s = 0;
	while (big[index] == little[index_s]
		&& little[index_s] && big[index])
	{
		index++;
		index_s++;
	}
	return (index_s);
}

char		*ft_strstr(const char *big, const char *little)
{
	int			index;
	int			index_s;
	int			length;
	const char	*result;

	index = -1;
	index_s = 0;
	length = ft_strlen(little);
	if (little[index_s] == '\0')
		return ((char*)big);
	else
		while (big[++index])
		{
			if (big[index] == little[0])
			{
				if ((index_s = ft_islittleinbig(big, little, index)) == length)
				{
					result = &big[index];
					return ((char*)result);
				}
			}
		}
	if (big[index] == '\0')
		return (NULL);
	return ((char*)big);
}
