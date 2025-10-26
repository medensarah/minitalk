/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 19:22:43 by smedenec          #+#    #+#             */
/*   Updated: 2025/10/26 19:23:25 by smedenec         ###   ########.fr       */
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
		ft_printf("%s", *array);
}

void	exit_server(char **array)
{
	print_array(&array);
	free_array(&array);
	exit(0);
}
