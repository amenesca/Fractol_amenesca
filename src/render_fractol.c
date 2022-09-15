#include "../includes/fractol.h"

int render_fr(t_fractol *fr)
{
    if (fr->render == 0)
    {
        if (fr->what_fractol == 1)
            draw_mandelbrot(fr);
    	if (fr->what_fractol == 0)
            draw_julia(fr);
        mlx_put_image_to_window(fr->mlx, fr->mlx_win, fr->img, 0, 0);
        fr->render = 1;
    }
    return (fr->render);
}