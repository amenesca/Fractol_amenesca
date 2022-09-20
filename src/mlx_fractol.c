/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_fractol.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenesca <amenesca@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:04:19 by amenesca          #+#    #+#             */
/*   Updated: 2022/09/20 15:06:25 by amenesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void	mlx_fractol(t_fractol *fr)
{
	fr->min_r = -2;
	fr->max_r = 2;
	fr->min_i = -1.5;
	fr->max_i = fr->min_i + (fr->max_r - fr->min_r) * ((double)W / (double)W);
	fr->render = 0;
	fr->mlx = mlx_init();
	fr->mlx_win = mlx_new_window(fr->mlx, W, W, "Fractol");
	fr->img = mlx_new_image(fr->mlx, W, W);
	fr->addr = mlx_get_data_addr(fr->img, &fr->bits, &fr->line, &fr->endian);
}
