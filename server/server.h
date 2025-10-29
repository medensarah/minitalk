/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:01:41 by smedenec          #+#    #+#             */
/*   Updated: 2025/10/29 16:39:14 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVER_H
# define SERVER_H

# include <stddef.h>
# include <stdlib.h>
# include <limits.h>
# include <signal.h>
# include <unistd.h>

# include "../config.h"
# include "../ft_printf/ft_printf.h"

extern int	g_global;
void	setup_signals(void);
void	process_signal(int signum, siginfo_t *info, void *context);
void	free_array(char **array);
void	print_array(char **array);
char	*create_array(char **array, int signum, siginfo_t *info);
void	exit_server(char **array, int *spot, char *c);
char	*ft_realloc(char *ptr, int new_size);
int		ft_strlen(const char *str);
void	reset_static(int *spot, char *c);

#endif
