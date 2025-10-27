/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:14:55 by smedenec          #+#    #+#             */
/*   Updated: 2025/10/27 19:24:22 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../config.h"
#include "client.h"
#include <time.h>

int	send_signal(int pid, int signum)
{
	int	quest;

	quest = 0;
	quest = kill(pid, signum);
	if (quest == -1)
		return (0);
	return (1);
}

void	send_char(int pid, char c)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		if ((c >> i) & 1)
			send_signal(pid, SIGUSR1);
		else
			send_signal(pid, SIGUSR2);
		i--;
		struct timespec	ts;
		ts.tv_sec = 0;
		ts.tv_nsec = 500000; // 500 µs
		nanosleep(&ts, NULL);
	}
}
