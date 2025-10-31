/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:09:37 by smedenec          #+#    #+#             */
/*   Updated: 2025/10/31 14:21:00 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../config.h"
#include "server.h"

int	main(void)
{
	ft_printf("Server PID: %d\n", getpid());
	setup_signals();
	while (1)
		pause();
}

void	setup_signals(void)
{
	struct sigaction	sa_usr;

	sa_usr.sa_sigaction = process_signal;
	sigemptyset(&sa_usr.sa_mask);
	sa_usr.sa_flags = SA_RESTART | SA_SIGINFO;
	sigaction(SIGUSR1, &sa_usr, NULL);
	sigaction(SIGUSR2, &sa_usr, NULL);
}
