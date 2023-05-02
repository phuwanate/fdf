/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plertsir <plertsir@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:43:45 by plertsir          #+#    #+#             */
/*   Updated: 2023/05/02 13:43:52 by plertsir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>

void	force_quit(char *s)
{
	if (errno == 0)
		ft_putendl_fd(s, 2);
	else
		perror(s);
	exit(1);
}
