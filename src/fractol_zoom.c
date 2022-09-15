#include "../includes/fractol.h"

void    fractol_zoom_in(t_fractol *fr)
{
    double zoom = 0.90;
	double	center_r;
	double	center_i;

	center_r = fr->min_r - fr->max_r;
	center_i = fr->max_i - fr->min_i;
	fr->max_r = fr->max_r + (center_r - zoom * center_r) / 2;
	fr->min_r = fr->max_r + zoom * center_r;
	fr->min_i = fr->min_i + (center_i - zoom * center_i) / 2;
	fr->max_i = fr->min_i + zoom * center_i;
    fr->render = 0;
}

void    fractol_zoom_out(t_fractol *fr)
{
    double zoom = 1.10;    
   	double	center_r;
	double	center_i;

	center_r = fr->min_r - fr->max_r;
	center_i = fr->max_i - fr->min_i;
	fr->max_r = fr->max_r + (center_r - zoom * center_r) / 2;
	fr->min_r = fr->max_r + zoom * center_r;
	fr->min_i = fr->min_i + (center_i - zoom * center_i) / 2;
	fr->max_i = fr->min_i + zoom * center_i;
    fr->render = 0;
}