/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 13:50:05 by vbaudron          #+#    #+#             */
/*   Updated: 2017/10/18 16:12:25 by vbaudron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

intmax_t	ft_atoimax_t(const char *str)
{
	int			i;
	int			j;
	intmax_t	result;

	i = 0;
	j = 0;
	result = 0;
	while ((str[i] >= 0 && str[i] <= 32) || str[i] == 127)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		j = i;
		if (str[i + 1] > '9' || str[i + 1] < '0')
			return (0);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i++] - '0';
		if ((str[i] == '\0' || str[i] < '0' || str[i] > '9') && str[j] == '-')
			return (result * -1);
		if ((str[i] == '\0' || str[i] < '0' || str[i] > '9') && str[j] != '-')
			return (result);
	}
	return (0);
}
