/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:01:41 by smedenec          #+#    #+#             */
/*   Updated: 2025/10/22 19:38:20 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVER_H
# define SERVER_H

#define _POSIX_C_SOURCE 200809L
# include <stddef.h>
# include <stdlib.h>
# include <limits.h>
# include <signal.h>
# include <unistd.h>

# include "../ft_printf/ft_printf.h"

void	setup_signals();
void	process_signal(int signum);
void	process_sigint(int signum);

#endif
