/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free_s1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmoreau <esmoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 17:28:06 by esmoreau          #+#    #+#             */
/*   Updated: 2019/11/30 17:31:27 by esmoreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strjoin_free_s1(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		j;

	if (!(s1 && s2))
		return (NULL);
	j = 0;
	i = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = -1;
	while (s1[++i])
	{
		str[j] = s1[i];
		j++;
	}
	i = -1;
	while (s2[++i])
	{
		str[j] = s2[i];
		j++;
	}
	free(s1);
	str[j] = '\0';
	return (str);
}
