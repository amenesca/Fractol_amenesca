#include "../includes/fractol.h"

void	draw_mandelbrot(t_fractol fr, t_image img)
{
	fr.y = -1;
	while (++fr.y < WIN_Y)
	{
		fr.x = -1;
		while (++fr.x < WIN_X)
		{
			fr.cr = fr.min_r + (double)fr.x * ((fr.max_r - fr.min_r) / WIN_X);
            fr.ci = fr.min_i + (double)fr.y * ((fr.max_i - fr.min_i) / WIN_Y);
			put_mandelbrot(fr, img);
		}
	}
}

void	draw_julia(t_fractol fr, t_image img)
{
	while (++fr.y < WIN_Y)
	{
		fr.x = -1;
		while (++fr.x < WIN_X)
		{
			fr.zr = fr.min_r + (double)fr.x * ((fr.max_r - fr.min_r) / WIN_X);
            fr.zi = fr.min_i + (double)fr.y * ((fr.max_i - fr.min_i) / WIN_Y);
			put_julia(fr, img);
		}
	}
}

void    put_mandelbrot(t_fractol fr, t_image img)
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
		my_mlx_pixel_put(&img, fr.x, fr.y, 0x00000000);
	if (is_fr == 0)
		put_colors(fr, img);
}

void    put_julia(t_fractol fr, t_image img)
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
		my_mlx_pixel_put(&img, fr.x, fr.y, 0x00000000);
	if (is_fr == 0)
		put_colors(fr, img);
}