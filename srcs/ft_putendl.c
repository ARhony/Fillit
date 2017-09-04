/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 19:22:13 by anicolas          #+#    #+#             */
/*   Updated: 2016/11/25 19:13:58 by anicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_putendl(char const *s)
{
	int length;

	length = 0;
	if (!s)
		return ;
	while (s[length] != '\0')
		length++;
	write(1, s, length);
	write(1, "\n", 1);
}
