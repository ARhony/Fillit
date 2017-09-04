/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 20:45:56 by anicolas          #+#    #+#             */
/*   Updated: 2016/11/25 19:27:02 by anicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		index;
	int		i_s1;
	int		i_s2;
	char	*rt_s;

	index = 0;
	if (!s1 || !s2)
		return (NULL);
	i_s1 = ft_strlen((char *)s1);
	i_s2 = ft_strlen((char *)s2);
	if ((rt_s = (char *)malloc(sizeof(char) * (i_s1 + i_s2) + 1)) == NULL)
		return (NULL);
	i_s1--;
	i_s2--;
	while (index <= (i_s1 + 1 + i_s2 + 1))
	{
		if (index <= i_s1)
			rt_s[index] = s1[index];
		else
			rt_s[index] = s2[index - i_s1 - 1];
		index++;
	}
	rt_s[index] = '\0';
	return (rt_s);
}
