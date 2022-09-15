#include "../includes/fractol.h"

int handle_keys(int button, t_fractol *fr)
{
	if (button == 53)
		exit (0);
	return (*fr).iter;
}

#include <stdio.h>
int handle_mouse(int button, int x, int y, t_fractol *fr)
{
	if (button == 1)
	{
		x -= WIN / 2;
		y -= WIN / 2;
		if (x < 0)
			move(fr, (double)x / WIN, 'L');
		else if (x > 0)
			move(fr, (double)x * -1 / WIN, 'R');
		if (y < 0)
			move(fr, (double)y * -1 / WIN, 'U');
		else if (y > 0)
			move (fr, (double)y / WIN, 'D');
		fr->render = 0;
	}
	if (button == 5)
		fractol_zoom_in(fr);
	if (button == 4)
		fractol_zoom_out(fr);
	return (*fr).iter;
}

void	move(t_fractol *f, double distance, char direction)
{
	double	center_r;
	double	center_i;

	center_r = f->max_r - f->min_r;
	center_i = f->max_i - f->min_i;
	if (direction == 'R')
	{
		f->min_r += center_r * distance;
		f->max_r += center_r * distance;
	}
	else if (direction == 'L')
	{
		f->min_r -= center_r * distance;
		f->max_r -= center_r * distance;
	}
	else if (direction == 'D')
	{
		f->min_i -= center_i * distance;
		f->max_i -= center_i * distance;
	}
	else if (direction == 'U')
	{
		f->min_i += center_i * distance;
		f->max_i += center_i * distance;
	}
}