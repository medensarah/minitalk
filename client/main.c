/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:09:37 by smedenec          #+#    #+#             */
/*   Updated: 2025/10/28 15:44:18 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../config.h"
#include "client.h"

int	main(int argc, char **argv)
{
	int	i;
	int	pid;
	int	signum;

	pid = 0;
	i = 0;
	signum = 0;
	if ((argc == 3) && argv && argv[1] && argv[2])
	{
		pid = ft_atoi(argv[1]);
		if (!pid)
			return (1);
		while (argv[2][i])
			send_char(pid, argv[2][i++]);
		send_char(pid, '\0');
		return (0);
	}
	else
		return (1);
}
