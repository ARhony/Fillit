/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 19:56:05 by anicolas          #+#    #+#             */
/*   Updated: 2016/11/16 19:41:30 by anicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t		index;
	int			length;

	index = 0;
	length = ft_strlen(s1);
	while (s2[index] && index < n)
	{
		s1[length] = s2[index];
		index++;
		length++;
	}
	s1[length] = '\0';
	return (s1);
}
