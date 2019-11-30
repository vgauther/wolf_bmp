/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_surface.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgauther <vgauther@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 13:55:45 by vgauther          #+#    #+#             */
/*   Updated: 2019/11/30 13:56:22 by vgauther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf.h"

void	put_surface(t_var *var, SDL_Surface *s, SDL_Rect dimensions)
{
	SDL_Texture	*mon_image;

	mon_image = SDL_CreateTextureFromSurface(var->sdl.render, s);
	SDL_QueryTexture(mon_image, NULL, NULL, &dimensions.w, &dimensions.h);
	SDL_SetRenderTarget(var->sdl.render, mon_image);
	SDL_RenderCopy(var->sdl.render, mon_image, NULL, &dimensions);
	SDL_DestroyTexture(mon_image);
}
