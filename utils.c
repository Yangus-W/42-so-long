/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yawang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:25:25 by yawang            #+#    #+#             */
/*   Updated: 2024/08/27 18:15:39 by yawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

size_t	ft_arrlen(const char **arr)
{
	size_t	i;
	
	i = 0;
	while (arr[i])
		i++;
	return (i);
}

t_pxy	*get_position(char **map, char component)
{
	t_pxy	*position;
	size_t	i;
	size_t	j;

	position = malloc(sizeof(t_pxy));
	if (!position)
		return (NULL);
	i = -1;
	while (map[++i])
	{
		j = -1;
		while (map[i][++j])
		{
			if (map[i][j] == component)
			{
				position->y = i;
				position->x = j;
				return (position);
			}
		}
	}
	free(position);
	return (NULL);
}
