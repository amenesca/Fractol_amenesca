#include "../includes/fractol.h"

void	draw_mandelbrot(t_fractol fr)
{
	fr.y = -1;
	while (++fr.y < WIN_Y)
	{
		fr.x = -1;
		while (++fr.x < WIN_X)
		{
			fr.cr = fr.min_r + (double)fr.x * ((fr.max_r - fr.min_r) / WIN_X);
            fr.ci = fr.min_i + (double)fr.y * ((fr.max_i - fr.min_i) / WIN_Y);
			put_mandelbrot(fr);
		}
	}
}

void	draw_julia(t_fractol fr)
{
	while (++fr.y < WIN_Y)
	{
		fr.x = -1;
		while (++fr.x < WIN_X)
		{
			fr.zr = fr.min_r + (double)fr.x * ((fr.max_r - fr.min_r) / WIN_X);
            fr.zi = fr.min_i + (double)fr.y * ((fr.max_i - fr.min_i) / WIN_Y);
			put_julia(fr);
		}
	}
}
