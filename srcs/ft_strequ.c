/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 19:53:16 by anicolas          #+#    #+#             */
/*   Updated: 2016/11/25 20:00:08 by anicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strequ(char const *s1, char const *s2)
{
	int index;

	index = 0;
	if (!s1 || !s2)
		return (1);
	while (s1[index] && s2[index] && s1[index] == s2[index])
		index++;
	if (s1[index] - s2[index] == 0)
		return (1);
	else
		return (0);
}
