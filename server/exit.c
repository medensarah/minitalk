/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 19:22:43 by smedenec          #+#    #+#             */
/*   Updated: 2025/10/27 19:20:16 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../config.h"
#include "server.h"

void	free_array(char **array)
{
	if (array && *array)
	{
		free(*array);
		*array = NULL;
	}
}

void	print_array(char **array)
{
	if (array && *array)
		ft_printf("%s\n", *array);
}

void	exit_server(char **array, int *spot, char *c)
{
	print_array(array);
	free_array(array);
	reset_static(spot, c);
	//exit(0);
}

void	reset_static(int *spot, char *c)
{
	if (spot)
		*spot = 0;
	if (c)
		*c = 0;
}
