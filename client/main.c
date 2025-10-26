/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:09:37 by smedenec          #+#    #+#             */
/*   Updated: 2025/10/26 14:32:23 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../config.h"
#include "client.h"
#include <time.h>

int	main(int argc, char **argv)
{
	int	i;
	int	pid;
	int	signum;

	pid = 0;
	i = 0;
	signum = 0;
	ft_printf("Client\n");
	if ((argc == 3) && argv && argv[1] && argv[2])
	{
		ft_printf("PID = %s\nSTR = %s\n", argv[1], argv[2]);
		pid = ft_atoi(argv[1]);
		while (i++ < 8)
		{
			signum = SIGUSR2;
			if (i % 2 == 0)
				signum = SIGUSR1;
			if (!send_signal(pid, signum))
				return (ft_printf("Fail to send a signal"));
			struct timespec	ts;
			ts.tv_sec = 0;
			ts.tv_nsec = 100000; // 100 µs
			nanosleep(&ts, NULL);
		}
	}
}
