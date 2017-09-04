/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 21:31:06 by anicolas          #+#    #+#             */
/*   Updated: 2016/11/25 19:30:53 by anicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	result;

	result = n;
	if (result < 0)
	{
		write(fd, "-", 1);
		result *= -1;
	}
	if (result > 9)
	{
		ft_putnbr_fd(result / 10, fd);
		ft_putnbr_fd(result % 10, fd);
	}
	else
		ft_putchar_fd((result + '0'), fd);
}
