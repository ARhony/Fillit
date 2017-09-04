/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 19:48:38 by anicolas          #+#    #+#             */
/*   Updated: 2016/11/25 19:52:42 by anicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static int	ft_length(long n, int neg)
{
	long	result;
	int		length;

	result = n;
	length = 1;
	if (neg == 1)
		result *= -1;
	while (result >= 10)
	{
		result /= 10;
		length++;
	}
	return (length);
}

char		*ft_itoa(int n)
{
	char	*nbr;
	int		neg;
	int		length;
	long	result;

	result = n;
	neg = 0;
	if (n < 0)
		neg = 1;
	length = ft_length(result, neg);
	if ((nbr = ft_strnew(length + neg)) == NULL)
		return (NULL);
	else if (neg == 1)
	{
		nbr[0] = '-';
		result *= -1;
	}
	while (length > 0)
	{
		nbr[length + neg - 1] = result % 10 + '0';
		result /= 10;
		length--;
	}
	return (nbr);
}
