/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 17:49:35 by anicolas          #+#    #+#             */
/*   Updated: 2016/11/25 19:14:32 by anicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				index;
	const unsigned char	*s3;
	const unsigned char	*s4;

	index = 0;
	s3 = (const unsigned char *)s1;
	s4 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	while (s3[index] == s4[index] && index < n - 1)
		index++;
	return (s3[index] - s4[index]);
}
