/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 19:40:59 by anicolas          #+#    #+#             */
/*   Updated: 2016/11/22 21:21:42 by anicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*rt_s;

	index = 0;
	if (!s && !f)
		return (NULL);
	while (s[index])
		index++;
	if ((rt_s = (char *)malloc(sizeof(char) * index + 1)) == NULL)
		return (NULL);
	index = 0;
	while (s[index] != '\0')
	{
		rt_s[index] = (*f)(index, s[index]);
		index++;
	}
	rt_s[index] = '\0';
	return (rt_s);
}
