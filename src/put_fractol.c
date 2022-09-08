#include "../includes/fractol.h"

void    put_mandelbrot(t_fractol fr)
{
    int		is_fr;
	double	temp;

	fr.iter = 0;
	fr.zr = 0;
	fr.zi = 0;
	is_fr = 1;
	while (fr.iter++ < MAX_ITER)
    {
		if ((fr.zr * fr.zr + fr.zi * fr.zi) > 4)
        {
            is_fr = 0;
            break ;
		}
		temp = 2 * fr.zr * fr.zi + fr.ci;
		fr.zr = fr.zr * fr.zr - fr.zi * fr.zi + fr.cr;
		fr.zi = temp;
	}
	if (is_fr == 1)
		mlx_pixel_put(fr.mlx, fr.mlx_win, fr.x, fr.y, 0X000000);
	if (is_fr == 0)
		put_colors(fr);
}

void    put_julia(t_fractol fr)
{
    int		is_fr;
	double	temp;

	fr.iter = 0;
	fr.cr = 0.285;
	fr.ci =  0.01;
	is_fr = 1;
	while (fr.iter++ < MAX_ITER)
    {
		if ((fr.zr * fr.zr + fr.zi * fr.zi) > 4)
        {
            is_fr = 0;
            break ;
		}
		temp = 2 * fr.zr * fr.zi + fr.ci;
		fr.zr = fr.zr * fr.zr - fr.zi * fr.zi + fr.cr;
		fr.zi = temp;
	}
	if (is_fr == 1)
		mlx_pixel_put(fr.mlx, fr.mlx_win, fr.x, fr.y, 0X000000);
	if (is_fr == 0)
		put_colors(fr);
}