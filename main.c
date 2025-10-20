/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:09:37 by smedenec          #+#    #+#             */
/*   Updated: 2025/10/20 16:30:02 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(int argc, char **argv)
{
	int	answer;

	argc = 1;
	if(argv && argv[0])
		argv[0][0] = '1';
	answer = 0;
	answer = sigusr1(1);
	if (!answer)
		return (1);
	return (0);
}
