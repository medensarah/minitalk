/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:09:37 by smedenec          #+#    #+#             */
/*   Updated: 2025/10/22 20:00:35 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.h"

int	main(void)
{
	ft_printf("Server PID: %d\n", getpid());
	setup_signals();
	while (1)
		pause();
}

void setup_signals(void)
{
	struct sigaction sa_usr;
	sa_usr.sa_handler = process_signal;
	sigemptyset(&sa_usr.sa_mask);
	sa_usr.sa_flags = SA_RESTART;
	sigaction(SIGUSR1, &sa_usr, NULL);
	sigaction(SIGUSR2, &sa_usr, NULL);
	struct sigaction sa_int;
	sa_int.sa_handler = process_sigint;
	sigemptyset(&sa_int.sa_mask);
	sa_int.sa_flags = 0;
	sigaction(SIGINT, &sa_int, NULL);
}

void	process_signal(int signum)
{
	if (signum == SIGUSR1)
		ft_printf("Received SIGUSR1 signal: %d\n", signum);
	else if (signum == SIGUSR2)
		ft_printf("Received SIGUSR2 signal: %d\n", signum);
	else
		ft_printf("Received unknown signal (SIGUSR1 SIGUSR2): %d\n", signum);
	ft_printf("Message Received\n");
}

void	process_sigint(int signum)
{
	(void)signum;

	ft_printf("\nReceived 'Ctrl + C' signal (SIGINT): %d\n", signum);
	//free all
	exit (0);
}
