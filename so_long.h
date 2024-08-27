/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yawang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 18:01:49 by yawang            #+#    #+#             */
/*   Updated: 2024/08/27 18:32:27 by yawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# define SPRITES_NB 5

/* LIBRARIES */
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <stddef.h>

# include "mlx_linux/mlx.h"
# include <X11/X.h>
# include <X11/keysym.h>

# include "libft/libft.h"
# include "settings.h"

/* STRUCTS & TYPES */

typedef struct s_img
{
	void	*ptr;
	char	*pxls_ptr;
	int		bpp;
	int		endian;
	int		line_len;
}	t_img;

typedef struct s_pxy
{
	int	x;
	int	y;
}	t_pxy;

typedef struct s_mlx
{
	void	*mlx_ptr;
	void	*win_ptr;
	t_img	img[SPRITES_NB];
	char	**map;
	int		width;
	int		height;
	int		coinsleft;
	int		moves;
	int		x;
	int		y;
	int		dir;
}	t_mlx;

typedef struct s_check
{
	int		count_c;
	int		count_e;
	int		count_p;
	char	**defmap;
}	t_check;

size_t	ft_arrlen(const char **arr);
t_pxy	*get_position(char **map, char component);

#endif