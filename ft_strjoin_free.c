/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_strjoin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 15:26:59 by vbaudron          #+#    #+#             */
/*   Updated: 2017/10/18 16:12:58 by vbaudron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	add_begin(char *s1, char **str)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		(*str)[i] = s1[i];
		i++;
	}
	return (i);
}

static int	add_end(char *s2, char **str, int i)
{
	int	j;

	j = 0;
	while (s2[j] != '\0')
	{
		(*str)[i + j] = s2[j];
		j++;
	}
	return (i + j);
}

static void	free_them_both(char *s1, char *s2)
{
	if (s1)
	{
		free(s1);
		s1 = NULL;
	}
	if (s2)
	{
		free(s2);
		s2 = NULL;
	}
}

char		*ft_strjoin_free(char *s1, char *s2)
{
	int		len;
	int		i;
	char	*str;

	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (s1)
		i = add_begin(s1, &str);
	if (s2)
		i = add_end(s2, &str, i);
	str[i] = '\0';
	free_them_both(s1, s2);
	return (str);
}
