/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_gestion.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgauther <vgauther@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 14:11:19 by vgauther          #+#    #+#             */
/*   Updated: 2019/11/30 14:14:20 by vgauther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf.h"

void	key_gestion(t_var *var, t_player *pl, t_surf s)
{
	change_key(var, pl, s);
	choose_key(var, pl, s);
}
