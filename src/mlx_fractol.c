#include "../includes/fractol.h"

void    mlx_fractol(t_fractol *fr)
{
    fr->mlx = mlx_init();
	fr->mlx_win = mlx_new_window(fr->mlx, WIN_X, WIN_Y, "Fractol");
	fr->img = mlx_new_image(fr->mlx, WIN_X, WIN_Y);
	fr->addr = mlx_get_data_addr(fr->img, &fr->bits_per_pixel, &fr->line_length, &fr->endian);
}