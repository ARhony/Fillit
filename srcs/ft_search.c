/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bonus_searchandreplace.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 17:18:54 by anicolas          #+#    #+#             */
/*   Updated: 2016/11/26 20:14:01 by anicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static char	*ft_replace(char *rt_s, const char *s, char *sea, char *rep)
{
	int		index;
	size_t	n;

	index = 0;
	n = ft_strlen(rt_s) + 1;
	while (n--)
	{
		if (ft_strstr(s, sea) == s)
		{
			ft_strcpy(&rt_s[index], rep);
			index += ft_strlen(rep);
			s += ft_strlen(sea);
		}
		else
			rt_s[index++] = *s++;
	}
	rt_s[index] = '\0';
	return (rt_s);
}

char		*ft_search(const char *s, char *tosearch, char *toreplace)
{
	char	*rt_s;
	int		index;
	int		c;
	size_t	total_len;

	rt_s = (char *)s;
	index = -1;
	c = 0;
	while (s[++index] != '\0')
		if (ft_strstr(&s[index], tosearch) == &s[index])
		{
			index += ft_strlen(tosearch) - 1;
			c++;
		}
	total_len = index + c * (ft_strlen(toreplace) - ft_strlen(tosearch));
	if ((rt_s = (char *)malloc(sizeof(char) * total_len + 1)) == NULL)
		return (NULL);
	total_len++;
	while (total_len--)
		rt_s[total_len] = 'a';
	rt_s = ft_replace(rt_s, s, tosearch, toreplace);
	return (rt_s);
}
