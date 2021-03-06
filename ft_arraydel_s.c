/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraydel_s.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 08:47:19 by mmahloko          #+#    #+#             */
/*   Updated: 2018/08/15 13:13:12 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_arraydel_s(char ***arr)
{
	int		i;

	i = -1;
	if (!*arr)
		return ;
	while ((*arr)[++i])
		ft_strdel(&(*arr)[i]);
	free(*arr);
	*arr = NULL;
}
