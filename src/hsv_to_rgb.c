/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hsv_to_rgb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenesca <amenesca@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:14:08 by amenesca          #+#    #+#             */
/*   Updated: 2022/09/20 15:16:22 by amenesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void	cases1(t_color *colors)
{
	if (colors->i == 0)
	{
		colors->red = colors->v;
		colors->green = colors->t;
		colors->blue = colors->p;
	}
	if (colors->i == 1)
	{
		colors->red = colors->q;
		colors->green = colors->v;
		colors->blue = colors->p;
	}
	if (colors->i == 2)
	{
		colors->red = colors->p;
		colors->green = colors->v;
		colors->blue = colors->t;
	}
}

void	cases2(t_color *colors)
{
	if (colors->i == 3)
	{
		colors->red = colors->p;
		colors->green = colors->q;
		colors->blue = colors->v;
	}
	if (colors->i == 4)
	{
		colors->red = colors->t;
		colors->green = colors->p;
		colors->blue = colors->v;
	}
	if (colors->i == 5)
	{
		colors->red = colors->v;
		colors->green = colors->p;
		colors->blue = colors->q;
	}
}

void	hsv_to_rgb(t_color *colors)
{
	if (colors->s == 0)
	{
		colors->r = colors->v;
		colors->g = colors->v;
		colors->b = colors->v;
	}
	else
	{
		if (colors->h == 360)
			colors->h = 0;
		else
			colors->h = colors->h / 60;
	}
	colors->i = (int)trunc(colors->h);
	colors->f = colors->h - colors->i;
	colors->p = colors->v * (1.0 - colors->s);
	colors->q = colors->v * (1.0 - (colors->s * colors->f));
	colors->t = colors->v * (1.0 - (colors->s * (1.0 - colors->f)));
	cases1(colors);
	cases2(colors);
	colors->r = colors->red * 255;
	colors->g = colors->green * 255;
	colors->b = colors->blue * 255;
}

void	ft_rgb(t_color *colors)
{
	colors->rgb = colors->r;
	colors->rgb = (colors->rgb << 8) | colors->g;
	colors->rgb = (colors->rgb << 8) | colors->b;
}
