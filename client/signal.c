/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:14:55 by smedenec          #+#    #+#             */
/*   Updated: 2025/10/26 13:59:18 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../config.h"
#include "client.h"

int	send_signal(int pid, int signum)
{
	int	quest;

	quest = 0;
	quest = kill(pid, signum);
	if (quest == -1)
		return (0);
	ft_printf("send signum = %d\n", signum);
	return (1);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	i;
	int	num;

	num = 0;
	sign = 1;
	i = 0;
	while (str && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign = sign * -1 ;
		i++;
	}
	while (str && (str[i] >= '0' && str[i] <= '9'))
	{
		num = 10 * num;
		num = num + (str[i] - 48);
		i++;
	}
	return (num * sign);
}
