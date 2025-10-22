/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:14:55 by smedenec          #+#    #+#             */
/*   Updated: 2025/10/22 20:04:34 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "client.h"

int	send_signal(int pid, int signum)
{
	int	quest;

	quest = 0;
	quest = kill(pid, signum);
	if (quest == -1)
		return (0);
	ft_printf("oui pid = %d\n", pid);
	return (1);
}

static int	is_a_space(const char *str, int i)
{
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	i;
	int	num;

	num = 0;
	sign = 1;
	i = 0;
	i = is_a_space(str, i);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1 ;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = 10 * num;
		num = num + (str[i] - 48);
		i++;
	}
	return (num * sign);
}
