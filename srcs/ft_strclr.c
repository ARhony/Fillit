/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 18:51:32 by anicolas          #+#    #+#             */
/*   Updated: 2016/12/09 18:00:28 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strclr(char *s)
{
	int index;

	if (s)
	{
		index = 0;
		while (s[index])
		{
			s[index] = '\0';
			index++;
		}
	}
}
