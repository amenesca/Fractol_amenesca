/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_colors.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenesca <amenesca@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:24:07 by amenesca          #+#    #+#             */
/*   Updated: 2022/09/20 15:25:12 by amenesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void	put_colors(t_fractol *fr)
{
	t_color	colors;

	colors.h = 2 * fr->iter;
	colors.s = 0.8;
	colors.v = 0.6;
	colors.h = fmod(colors.h, 360.0);
	hsv_to_rgb(&colors);
	ft_rgb(&colors);
	my_mlx_pixel_put(fr, fr->x, fr->y, colors.rgb);
}
