/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:07:00 by smedenec          #+#    #+#             */
/*   Updated: 2025/10/22 19:57:41 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLIENT_H
# define CLIENT_H

#define _POSIX_C_SOURCE 200809L
# include <stddef.h>
# include <stdlib.h>
# include <limits.h>
# include <signal.h>
# include <unistd.h>

# include "../ft_printf/ft_printf.h"

int	send_signal(int pid, int signum);
int	ft_atoi(const char *str);

#endif
