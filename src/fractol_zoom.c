#include "../includes/fractol.h"

void    fractol_zoom_in(t_fractol fr)
{
    t_image img;
    int zoom = 0.90;
    double  center_r;
    double  center_i;
    center_r = fr.min_r - fr.max_r;
    center_i = fr.max_r - fr.min_i;
    fr.max_r = fr.max_r + (center_r - zoom * center_r) / 2;
    fr.min_r = fr.max_r + zoom * center_r;
    fr.min_i = fr.min_i + (center_i - zoom * center_i) / 2;
    fr.max_i = fr.min_i + zoom * center_i;
    img.img = mlx_new_image(fr.mlx, WIN_X, WIN_Y);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
    draw_mandelbrot(fr, img);
    mlx_put_image_to_window(fr.mlx, fr.mlx_win, img.img, 0, 0);
}

void    fractol_zoom_out(t_fractol fr)
{
    t_image img;
    int zoom = 1.10;
    double  center_r;
    double  center_i;
    center_r = fr.min_r - fr.max_r;
    center_i = fr.max_r - fr.min_i;
    fr.max_r = fr.max_r + (center_r - zoom * center_r) / 2;
    fr.min_r = fr.max_r + zoom * center_r;
    fr.min_i = fr.min_i + (center_i - zoom * center_i) / 2;
    fr.max_i = fr.min_i + zoom * center_i;
    img.img = mlx_new_image(fr.mlx, WIN_X, WIN_Y);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
    draw_mandelbrot(fr, img);
    mlx_put_image_to_window(fr.mlx, fr.mlx_win, img.img, 0, 0);
}