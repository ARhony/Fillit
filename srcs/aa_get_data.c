/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aa_get_data.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 16:56:47 by aramon            #+#    #+#             */
/*   Updated: 2016/12/22 03:52:11 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/utilities.h"

char	*get_dyn(char *t, size_t root)
{
	int		index;
	int		k;
	int		tmp;
	char	*new_t;

	new_t = create_new_t(t, root);
	k = 0;
	tmp = 0;
	index = 0;
	while (t[index] != '\0')
	{
		while (t[index] == '#' && t[index] != '\0')
			new_t[k++] = t[index++];
		if ((int)root - 4 < 0)
			index += (tmp = ((int)root - 4) * (-1));
		tmp = 0;
		while (tmp++ < (int)root - 4 && (int)root - 4 >= 0 && t[index] != '\0')
			new_t[k++] = '.';
		while (t[index] == '.' && t[index] != '\0')
			new_t[k++] = t[index++];
	}
	new_t[k] = '\0';
	return (new_t);
}

int		get_space(char *map, int j, size_t root)
{
	int		space;
	int		row;

	space = 0;
	row = j / (int)root;
	while (j - (row * (int)root) < (int)root && map[j] == '.')
	{
		space++;
		j++;
	}
	return (space);
}

int		get_k(char *t)
{
	int		k;
	int		i;

	k = 0;
	i = 0;
	while (k < 19)
	{
		i = 0;
		while (t[i] != '\0' && g_valid_piece[k][i] != '\0' &&
				t[i] == g_valid_piece[k][i])
			i++;
		if ((t[i] - g_valid_piece[k][i]) == 0)
			return (k);
		k++;
	}
	return (0);
}

int		get_countbis(int index)
{
	int		j;

	j = 0;
	if (g_valid_b[index] < g_valid_l[index])
		j = g_valid_l[index] - g_valid_b[index];
	return (j);
}
