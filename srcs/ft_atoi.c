/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 22:43:42 by anicolas          #+#    #+#             */
/*   Updated: 2016/12/01 16:54:42 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_atoi(const char *str)
{
	int index;
	int negative;
	int result;

	index = 0;
	negative = 1;
	result = 0;
	while (ISSPACE(str[index]))
		str++;
	if (str[index] == '-' || str[index] == '+')
		negative = str[index++] == '-' ? -1 : 1;
	while (str[index] == '0')
		str++;
	while (str[index] != '\0')
	{
		if (str[index] > '9' || str[index] < '0')
			return (negative * result);
		result = result * 10 + str[index++] - '0';
	}
	return (negative * result);
}
