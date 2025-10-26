/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:04:09 by smedenec          #+#    #+#             */
/*   Updated: 2025/10/26 15:44:56 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../config.h"
#include "client.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	i;

	num = 0;
	i = 0;
	while (str && (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str && str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	i = 0;
	while (str && (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str && (str[i] >= '0' && str[i] <= '9'))
	{
		if (num > 99999999)
			return (0);
		num = 10 * num;
		num = num + (str[i] - 48);
		i++;
	}
	return (num);
}
