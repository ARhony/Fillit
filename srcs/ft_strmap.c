/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 19:34:43 by anicolas          #+#    #+#             */
/*   Updated: 2016/11/25 18:58:35 by anicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		index;
	char	*rt_s;

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
		rt_s[index] = (*f)(s[index]);
		index++;
	}
	rt_s[index] = '\0';
	return (rt_s);
}
