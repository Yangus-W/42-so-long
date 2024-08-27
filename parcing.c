/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yawang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:56:23 by yawang            #+#    #+#             */
/*   Updated: 2024/08/20 16:48:03 by yawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/* CHECK IF THE MAP IS RECTANGLE */

int	is_rectangle(char **map)
{
	int		i;
	int		i_lastline;
	size_t	width;

	i = 0;
	width = ft_strlen(map[0]) - 1;
	i_lastline = ft_arrlen(map) - 1;
	while (map[i])
	{
		if (i != i_lastline && ft_strlen(map[i] - 1 != width))
			return (0);
		else if (i == i_lastline && ft_strlen(map[i]) != width)
			return (0);
		i++;
	}
	return (1);
}
/* CHECK IF THE MAP IS SURROUNDED BY WALLS */

int	is_closed_by_walls(char **map)
{
	size_t	width;
	size_t	height;
	int		i;

	width = ft_strlen(map[0]) - 1;
	height = 0;
	while (map[height])
		height++;
	i = 0;
	while (i < width)
	{
		if (map[0][i] != '1' || map[height - 1][i] != '1')
			return (0);
		i++;
	}
	i = 0;
	while (i < height)
	{
		if (map[i][0] != '1' || map[i][width - 1] != '1')
			return (0);
		i++;
	}
	return (1);
}
/* CHECK IF THERE ARE ALL THE COMPONENTS IN THE MAP */

int	has_all_components(char **map, t_check *counter)
{
	int	i;
	int	j;
	
	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'C')
				counter->count_c++;
			if (map[i][j] == 'E')
				counter->count_e++;
			if (map[i][j] == 'P')
				counter->count_p++;
			if (map[i][j] != 'C' && map[i][j] != 'E' && map[i][j] != 'P'
				&& map[i][j] != '1' && map[i][j] != '0' && map[i][j] != '\n')
				return (0);
			j++;
		}
		i++;
	}
	if (counter->count_c < 1 || counter->count_e != 1 || counter->count_p != 1)
		return (0);
	return (1);
}
/* CHECK IF THERE IS A VALID PATH IN THE MAP - FLOOD FILL */

int	has_valid_path(char **map, t_check counter)
{
	
}

int	main(void)
{
	int		fd;
	char	**map;

	fd = open("map.ber", O_RDONLY);
	if (fd < 0)
		return (-1);
	map = read(fd, )
} 