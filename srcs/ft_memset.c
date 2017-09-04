/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 19:14:34 by anicolas          #+#    #+#             */
/*   Updated: 2016/11/17 01:50:16 by anicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*b_unsgn;
	int				index;

	b_unsgn = b;
	index = 0;
	while (len > 0)
	{
		b_unsgn[index] = (unsigned char)c;
		index++;
		len--;
	}
	return (b);
}
