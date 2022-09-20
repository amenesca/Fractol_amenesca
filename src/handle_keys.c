/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_keys.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenesca <amenesca@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:52:33 by amenesca          #+#    #+#             */
/*   Updated: 2022/09/20 15:02:22 by amenesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int	handle_keys(int button, t_fractol *fr)
{
	if (button == 53)
	{
		mlx_destroy_image(fr->mlx, fr->img);
		mlx_destroy_window(fr->mlx, fr->mlx_win);
		exit (0);
	}
	return (fr->iter);
}

int	handle_close(t_fractol *fr)
{
	mlx_destroy_image(fr->mlx, fr->img);
	mlx_destroy_window(fr->mlx, fr->mlx_win);
	exit (0);
}

int	handle_mouse(int button, int x, int y, t_fractol *fr)
{
	if (button == 1)
	{
		x -= W / 2;
		y -= W / 2;
		if (x < 0)
			move(fr, (double)x / W, 'L');
		else if (x > 0)
			move(fr, (double)x * -1 / W, 'R');
		if (y < 0)
			move(fr, (double)y * -1 / W, 'U');
		else if (y > 0)
			move (fr, (double)y / W, 'D');
		fr->render = 0;
	}
	if (button == 4)
		fractol_zoom_in(fr);
	if (button == 5)
		fractol_zoom_out(fr);
	return (fr->iter);
}

void	move(t_fractol *f, double distance, char direction)
{
	double	center_r;
	double	center_i;

	center_r = f->max_r - f->min_r;
	center_i = f->max_i - f->min_i;
	if (direction == 'L')
	{
		f->min_r += center_r * distance;
		f->max_r += center_r * distance;
	}
	else if (direction == 'R')
	{
		f->min_r -= center_r * distance;
		f->max_r -= center_r * distance;
	}
	else if (direction == 'U')
	{
		f->min_i -= center_i * distance;
		f->max_i -= center_i * distance;
	}
	else if (direction == 'D')
	{
		f->min_i += center_i * distance;
		f->max_i += center_i * distance;
	}
}
