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

	colors.h = 100 * fr->iter;
	colors.s = 0.5;
	colors.v = 0.5;
	while (colors.h > 360)
		colors.h = colors.h - 360;
	hsv_to_rgb(&colors);
	ft_rgb(&colors);
	my_mlx_pixel_put(fr, fr->x, fr->y, colors.rgb);
}
