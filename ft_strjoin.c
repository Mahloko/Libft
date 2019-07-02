/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 08:17:32 by mmahloko          #+#    #+#             */
/*   Updated: 2019/07/02 17:27:32 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen((const char *)s1) + ft_strlen((const char *)s2);
	if (!(s = ft_strnew(i)))
		return (NULL);
	return (ft_strcat(ft_strcpy(s, s1), s2));
}
