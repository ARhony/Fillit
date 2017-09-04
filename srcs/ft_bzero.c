/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:41:31 by anicolas          #+#    #+#             */
/*   Updated: 2016/11/22 22:09:15 by anicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_bzero(void *s, size_t n)
{
	int				index;
	unsigned char	*s_unsgn;

	s_unsgn = (unsigned char *)s;
	index = 0;
	while (n > 0)
	{
		s_unsgn[index] = '\0';
		index++;
		n--;
	}
}
