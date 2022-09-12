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
		double pointX = (((double)x * ((fr->max_r - fr->min_r) / WIN_X)));
		double pointY = ((double)y *((fr->max_r - fr->min_r) / WIN_Y));
		double centerX = fr->max_r - fr->min_r;
		double centerY = fr->max_r - fr->min_r;
		fr->min_r = pointX + centerX/2;
		fr->max_r = pointX + centerX/2;
		fr->min_i = pointY + centerY/2;
		fr->max_i = fr->min_i + (fr->max_r - fr->min_r) * ((double)WIN_Y / (double)WIN_X); 
    	fr->render = 0;
		printf("testeX:%f\ntesteY:%f\n", pointX, pointY);
		printf ("min_r:%f\nmax_r:%f\nmin_i:%f\nmax_i:%f\n", fr->min_r, fr->max_r, fr->min_i, fr->max_i);
	}
	if (button == 5)
		fractol_zoom_in(fr);
	if (button == 4)
		fractol_zoom_out(fr);
	return (*fr).iter;
}