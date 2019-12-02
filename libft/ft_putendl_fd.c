/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmoreau <esmoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 17:28:06 by esmoreau          #+#    #+#             */
/*   Updated: 2019/11/30 17:29:54 by esmoreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	int	i;

	if (!s)
		return ;
	i = -1;
	while (s[++i])
		ft_putchar_fd(s[i], fd);
	ft_putchar_fd('\n', fd);
}
