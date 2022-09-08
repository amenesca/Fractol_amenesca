#include "../includes/fractol.h"

void	call_mandelbrot(t_fractol fr)
{
	fr.min_r = -2;
	fr.max_r = 2;
	fr.min_i = -1.5;
	fr.max_i = fr.min_i + (fr.max_r - fr.min_r) * ((double)WIN_Y / (double)WIN_X);
	draw_mandelbrot(fr);
}

void	call_julia(t_fractol fr)
{
	fr.min_r = -2;
	fr.max_r = 2;
	fr.min_i = -1.5;
	fr.max_i = fr.min_i + (fr.max_r - fr.min_r) * ((double)WIN_Y / (double)WIN_X);
	draw_julia(fr);
}
