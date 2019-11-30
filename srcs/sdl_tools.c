/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sdl_tools.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamisdra <mamisdra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 12:08:36 by mamisdra          #+#    #+#             */
/*   Updated: 2019/11/30 15:34:23 by vgauther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf.h"

void	freeloadbmp(t_surf s)
{
	SDL_FreeSurface(s.main_menu);
	SDL_FreeSurface(s.dirt_bg);
	SDL_FreeSurface(s.menu);
	SDL_FreeSurface(s.menu_o);
	SDL_FreeSurface(s.done);
	SDL_FreeSurface(s.done_o);
	SDL_FreeSurface(s.reset);
	SDL_FreeSurface(s.reset_o);
}

SDL_Rect	create_sdl_rect(int x, int y, int w, int h)
{
	SDL_Rect r;

	r.x = x;
	r.y = y;
	r.w = w;
	r.h = h;
	return (r);
}

void		sdl_clean_screen(SDL_Renderer *rend)
{
	SDL_SetRenderDrawColor(rend, 0, 0, 0, SDL_ALPHA_OPAQUE);
	SDL_RenderClear(rend);
}

/*
** destroy/free render + destroy/free window
*/

void		ft_clean_quit(t_surf s, t_var *v, t_player *pl)
{
	int i;

	i = 0;
	while (i < 4)
	{
			SDL_FreeSurface(v->wall_texture[i]);
			i++;
	}
	i = 0;
	while (i < 41)
	{
			SDL_FreeSurface(v->key_texture[i]);
			i++;
	}
	i = 0;
	while (v->map[i])
	{
		free(v->map[i]);
		i++;
	}
	free(v->map);
	freeloadbmp(s);
	i = 0;
	while (i < v->y_max)
	{
		free(v->m[i]);
		i++;
	}
	free(v->m);
	SDL_DestroyRenderer(v->sdl.render);
	SDL_DestroyWindow(v->sdl.window);
	(void)pl;
	(void)s;
	SDL_Quit();
}
