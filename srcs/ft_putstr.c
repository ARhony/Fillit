/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 16:58:47 by anicolas          #+#    #+#             */
/*   Updated: 2016/12/01 16:55:09 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_putstr(char const *str)
{
	int index;

	index = 0;
	if (!str)
		return ;
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		index++;
	}
}
