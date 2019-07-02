/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 07:54:36 by mmahloko          #+#    #+#             */
/*   Updated: 2019/07/02 17:35:03 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*s1;

	if (!s)
		return (NULL);
	if (!(s1 = ft_strnew(len)))
		return (NULL);
	return (ft_strncpy(s1, &s[start], len));
}
