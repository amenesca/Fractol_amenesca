#include "../includes/fractol.h"

void    mlx_fractol(t_fractol *fr)
{
	fr->min_r = -2;
	fr->max_r = 2;
	fr->min_i = -1.5;
	fr->max_i = fr->min_i + (fr->max_r - fr->min_r) * ((double)WIN / (double)WIN);
	fr->render = 0;
    fr->mlx = mlx_init();
	fr->mlx_win = mlx_new_window(fr->mlx, WIN, WIN, "Fractol");
	fr->img = mlx_new_image(fr->mlx, WIN, WIN);
	fr->addr = mlx_get_data_addr(fr->img, &fr->bits_per_pixel, &fr->line_length, &fr->endian);
}