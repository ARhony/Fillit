/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 18:49:18 by anicolas          #+#    #+#             */
/*   Updated: 2016/11/25 19:28:18 by anicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			length;
	const char	*result;

	length = ft_strlen(s);
	while (length >= 0)
	{
		if (s[length] == (char)c)
		{
			result = &s[length];
			return ((char*)result);
		}
		length--;
	}
	return (NULL);
}
