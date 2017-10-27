/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ito_oct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 15:51:34 by vbaudron          #+#    #+#             */
/*   Updated: 2017/09/28 15:52:11 by vbaudron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ito_oct(int nb)
{
	char	*s;
	int		len;
	int		result;
	int		i;

	s = ft_itoa(nb);
	len = ft_strlen(s);
	result = 0;
	i = 0;
	while (i < len)
	{
		result = (int)s[len - 1] * ft_power(8, i);
		i++;
	}
	return (result);
}
