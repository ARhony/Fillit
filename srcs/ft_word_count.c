/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bonus_word_count.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 01:16:23 by anicolas          #+#    #+#             */
/*   Updated: 2016/11/24 01:46:21 by anicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_word_count(char const *s, char c)
{
	int w_counter;
	int	check;
	int index;

	w_counter = 0;
	index = 0;
	check = 0;
	while (s[index])
	{
		check = w_counter;
		if (s[index] != c)
			w_counter++;
		while (s[index] != c && s[index])
			index++;
		if (check != w_counter)
			index--;
		index++;
	}
	return (w_counter);
}
