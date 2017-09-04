/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aa_feel_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 17:37:51 by aramon            #+#    #+#             */
/*   Updated: 2016/12/22 04:07:02 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/utilities.h"

int		first_check(int nb, int *index, int *count)
{
	if (nb == 1)
		return (-1);
	if (*index != 0)
		(*index)--;
	*count = *index + 1;
	return (0);
}

int		get_position(char *map, int j, char *t, size_t root)
{
	char	*tetriminos;

	tetriminos = get_dyn(t, root);
	while (check_place(map, tetriminos, j, get_k(t)) == 0 && map[j] != '\0')
		j++;
	return (j);
}

int		backtrack(char *map, int j, int *index, int *count)
{
	if (map[j] == '\0' && *index == 0)
		return (-1);
	if (map[j] == '\0')
	{
		(*count)--;
		(*index)--;
	}
	else
		*count = 0;
	return (1);
}

char	*solve_map(char *map, char **t, size_t root, int nb)
{
	int		index;
	int		j;
	int		count;

	index = -1;
	while (t[++index])
	{
		j = get_position(map, 0, t[index], root);
		if (map[j] == '\0')
		{
			if (first_check(nb, &index, &count) == -1)
				return (NULL);
			while (count > 0)
			{
				j = get_j(map, index) + 1;
				j = get_position(remove_letter(map, index), j, t[index], root);
				if (backtrack(map, j, &index, &count) == -1)
					return (NULL);
			}
		}
		map = put_piece(map, get_dyn(t[index], root), j, index);
		if (index + 1 >= nb)
			return (map);
	}
	return (NULL);
}

char	*feel_map(char **t, char *map, int nb)
{
	size_t	root;

	root = ft_getroot(ft_strlen(map));
	if ((map = solve_map(map, t, root, nb)) == NULL)
		return (NULL);
	else
		return (map);
}
