/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 20:45:12 by smedenec          #+#    #+#             */
/*   Updated: 2025/10/26 20:53:03 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../config.h"
#include "server.h"

char	*ft_realloc(char *ptr, int new_size)
{
	char	*new_ptr;
	int		old_size;
	int		i;

	i = 0;
	if (!ptr)
		return (malloc(new_size));
	old_size = ft_strlen(ptr);
	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);
	while (i < old_size && i < new_size)
	{
		new_ptr[i] = ptr[i];
		i++;
	}
	free(ptr);
	return (new_ptr);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}
