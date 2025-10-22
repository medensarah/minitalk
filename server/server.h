/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:01:41 by smedenec          #+#    #+#             */
/*   Updated: 2025/10/22 18:04:15 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVER_H
# define SERVER_H

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
