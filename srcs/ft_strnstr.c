/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 00:47:24 by anicolas          #+#    #+#             */
/*   Updated: 2016/11/25 20:23:43 by anicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static int	ft_islinb(const char *b, const char *l, size_t i, size_t n)
{
	int	index_s;

	index_s = 0;
	while (b[i] == l[index_s] && l[index_s] && b[i] && i < n)
	{
		i++;
		index_s++;
	}
	return (index_s);
}

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		index;
	int			index_s;
	int			length;
	const char	*result;

	index = -1;
	index_s = 0;
	length = ft_strlen(little);
	if (little[index_s] == '\0')
		return ((char*)big);
	else
		while (big[++index] && index < len)
		{
			if (big[index] == little[0])
			{
				if ((index_s = ft_islinb(big, little, index, len)) == length)
				{
					result = &big[index];
					return ((char*)result);
				}
			}
		}
	if (big[index] == '\0' || index == len)
		return (NULL);
	return ((char*)big);
}
