/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 22:35:34 by anicolas          #+#    #+#             */
/*   Updated: 2016/11/24 02:03:43 by anicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0'
			&& s1[index] == s2[index] && index < n)
		index++;
	if (n == index)
		return (0);
	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}
