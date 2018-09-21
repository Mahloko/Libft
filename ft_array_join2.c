/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_join2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 07:59:31 by mmahloko          #+#    #+#             */
/*   Updated: 2018/09/18 16:09:24 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_array_join2(char ***arr, char *str)
{
	int		i;
	char	**new;

	i = 0;
	if (!*arr)
		return (NULL);
	if (!str)
		return (*arr);
	while ((*arr)[i])
		i++;
	i++;
	if (!(new = (char **)malloc(sizeof(char *) * i + 2)))
		return (NULL);
	i = -1;
	while ((*arr)[++i])
		new[i] = ft_strdup((*arr)[i]);
	ft_arraydel_s(arr);
	new[i++] = ft_strdup(str);
	new[i] = NULL;
	return (new);
}
