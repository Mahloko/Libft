/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 11:05:01 by mmahloko          #+#    #+#             */
/*   Updated: 2018/09/07 11:07:39 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static int		ft_notint(const char *s)
{
	int		i;

	i = 0;
	while (s[i] == '0')
		i++;
	if (s[0] == '-')
		i++;
	if (ft_strlen(s + i) > 10)
		return (1);
	return (0);
}

static int		ft_overflow(const char *str)
{
	char	*min;
	char	*max;
	int		len;

	max = "2147483647";
	min = "2147483648";
	len = ft_strlen(str);
	str = (len == 11 && *str == '-') ? str + 1 : str;
	while (*str && str[0] != '-')
	{
		if (len == 10)
		{
			if (ft_strncmp(str, max, 1) > 0)
				return (1);
			max++;
		}
		else if (len == 11)
		{
			if (ft_strncmp(str, min, 1) > 0)
				return (1);
			min++;
		}
		str++;
	}
	return (0);
}

int				ft_isint(char *str)
{
	int		i;

	i = 0;
	while (ft_isdigit(str[i]))
		i++;
}
