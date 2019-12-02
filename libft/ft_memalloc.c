/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmoreau <esmoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 17:28:06 by esmoreau          #+#    #+#             */
/*   Updated: 2019/11/30 17:29:06 by esmoreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memalloc(size_t size)
{
	char	*alloc;
	size_t	i;

	i = 0;
	if (!(alloc = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	while (i < size)
	{
		alloc[i] = '\0';
		i++;
	}
	return (alloc);
}
