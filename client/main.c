/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:09:37 by smedenec          #+#    #+#             */
/*   Updated: 2025/10/22 20:06:10 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "client.h"

#include <signal.h>

int	main(int argc, char **argv)
{
	int	i;
	int	pid;

	pid = 0;
	i = 0;
	ft_printf("Client\n");
	if ((argc == 3) && argv && argv[1] && argv[2])
	{
		ft_printf("PID = %s\nSTR = %s\n", argv[1], argv[2]);
		pid = ft_atoi(argv[1]);
		while (i++ < 10)
		{
			if (!send_signal(pid, 10))
				return (ft_printf("Fail to send a signal"));
		}
	}
}
