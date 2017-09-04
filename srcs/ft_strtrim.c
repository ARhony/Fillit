/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 17:07:28 by anicolas          #+#    #+#             */
/*   Updated: 2016/11/25 20:05:44 by anicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static char	*ft_trimhelp(char *rt_s, char *s, int length, int start)
{
	int index;

	index = 0;
	while (index <= length - 1)
	{
		rt_s[index] = (char)s[start];
		index++;
		start++;
	}
	rt_s[index] = '\0';
	return (rt_s);
}

char		*ft_strtrim(char const *s)
{
	int			start;
	int			end;
	char		*rt_s;
	int			length;

	start = 0;
	if (!s)
		return (NULL);
	end = ft_strlen(s) - 1;
	while (s[start] == ' ' || s[start] == '\t' || s[start] == '\n')
		start++;
	if (start == end + 1)
		return (rt_s = ft_strdup(""));
	while (s[end] == ' ' || s[end] == '\t' || s[end] == '\n')
		end--;
	length = end - start + 1;
	if ((rt_s = (char *)malloc(sizeof(char) * length + 1)) == NULL)
		return (NULL);
	rt_s = ft_trimhelp(rt_s, (char *)s, length, start);
	return (rt_s);
}
