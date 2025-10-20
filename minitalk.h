/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 13:12:41 by smedenec          #+#    #+#             */
/*   Updated: 2025/10/20 16:19:02 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <stddef.h>
# include <stdlib.h>
# include <limits.h>
# include <signal.h>
# include <unistd.h>

# include "ft_printf/ft_printf.h"

# define GREEN		"\033[0;38;2;142;194;121m"
# define LIGREEN	"\033[0;38;2;142;255;105m"
# define RED		"\033[0;38;2;235;76;76;49m"
# define LIRED		"\033[0;38;2;247;14;21;49m"
# define NONE		"\033[0m"

// typedef struct s_list
// {
// 	int				nbr;
// 	int				value;
// 	struct s_list	*next;
// }	t_list;

int	sigusr1(int quest);
// t_list	*init_parsing(int argc, char ***argv, int *argv_malloced);
// t_list	*build_list(int argc, char **argv, int i);
// void	lst_addback(t_list **head, t_list *new);
// void	*error(char **argv, int *argv_malloced);

#endif
