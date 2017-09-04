/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 23:31:53 by anicolas          #+#    #+#             */
/*   Updated: 2016/11/25 18:58:14 by anicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char			*s4;
	char			*s3;
	size_t			index;

	s3 = (char *)s1;
	s4 = (char *)s2;
	index = 0;
	if (s4 < s3)
	{
		while (n > 0)
		{
			s3[n - 1] = s4[n - 1];
			n--;
		}
	}
	else
	{
		while (index < n)
		{
			s3[index] = s4[index];
			index++;
		}
	}
	return (s1);
}
