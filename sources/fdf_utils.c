/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plertsir <plertsir@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:43:45 by plertsir          #+#    #+#             */
/*   Updated: 2023/05/04 18:13:01 by plertsir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/fdf.h"
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>

double	percent(int start, int end, int curr)
{
	double	cur_point;
	double	distance;

	cur_point = curr - start;
	distance = end - start;
	if (distance == 0)
		return (0);
	else
		return (cur_point / distance);
}

void	force_quit(char *s)
{
	if (errno == 0)
		ft_putendl_fd(s, 2);
	else
		perror(s);
	exit(1);
}

t_point	get_point(int x, int y, t_map *map)
{
	t_point		point;
	int			index;

	index = (y * map->width) + x;
	point.x = x;
	point.y = y;
	point.z = map->coord[index];
	if (map->colors[index] == -1)
		point.colors = default_color(point.z, map);
	else
		point.colors = map->colors[index];
	return (point);
}