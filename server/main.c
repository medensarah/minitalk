/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:09:37 by smedenec          #+#    #+#             */
/*   Updated: 2025/10/22 16:19:34 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.h"

int	main(void)
{
	ft_printf("Server PID: %d\n", getpid());
	//setup_signals();
}

// void setup_signals(void)
// {
// 	struct sigaction sa_usr;
// 	sa_usr.sa_handler = handle_signal;
// 	sigemptyset(&sa_usr.sa_mask);
// 	sa_usr.sa_flags = SA_RESTART;
// 	sigaction(SIGUSR1, &sa_usr, NULL);
// 	sigaction(SIGUSR2, &sa_usr, NULL);
// 	struct sigaction sa_int;
// 	sa_int.sa_handler = handle_sigint;
// 	sigemptyset(&sa_int.sa_mask);
// 	sa_int.sa_flags = 0;
// 	sigaction(SIGINT, &sa_int, NULL);
// }
