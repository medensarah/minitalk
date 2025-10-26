/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:12:44 by smedenec          #+#    #+#             */
/*   Updated: 2025/10/26 20:59:16 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../config.h"
#include "server.h"

void	process_signal(int signum)
{
	static char	*array;

	if (!array)
	{
		array = malloc(sizeof(char) * 1);
		if (!array)
			exit_server(&array);
	}
	if (signum == SIGUSR1 || signum == SIGUSR2)
	{
		array = create_array(&array, signum);
		if (!array)
			exit_server(&array);
	}
}

char	*create_array(char **array, int	signum)
{
	static int	spot;
	static char	c;
	char		*new_array;
	int			len;

	if (signum == SIGUSR1)
		c = (c << 1) | 1;
	else if (signum == SIGUSR2)
		c = (c << 1);
	spot++;
	if (spot == 8)
	{
		spot = 0;
		len = ft_strlen(*array);
		new_array = ft_realloc(*array, len + 2);
		if (!new_array)
			return (free_array(&array), NULL);
		*array = new_array;
		(*array)[len] = c;
		(*array)[len + 1] = '\0';
		if (c == '\0')
			exit_server(&array);
		c = 0;
	}
	return (array);
}
//ft_printf("Received SIGUSR1 signal: %d\n", signum);
