/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 20:02:12 by anicolas          #+#    #+#             */
/*   Updated: 2016/11/25 20:00:20 by anicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t index;

	index = 0;
	if (!s1 || !s2 || n <= 0)
		return (1);
	while (s1[index] && s2[index] && s1[index] == s2[index] && index < n - 1)
		index++;
	if (s1[index] - s2[index] == 0)
		return (1);
	else
		return (0);
}
