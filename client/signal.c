/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:14:55 by smedenec          #+#    #+#             */
/*   Updated: 2025/10/29 16:40:06 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../config.h"
#include "client.h"

volatile int	g_global = 0;

void	assign_gobal(int signum)
{
	if (signum == SIGUSR1)
	{
		(void)signum;
		g_global = 1;
	}
}

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
		while (!g_global)
			pause();
		g_global = 0;
	}
}
