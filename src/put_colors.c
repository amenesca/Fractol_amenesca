#include "../includes/fractol.h"

void put_colors(t_fractol *fr)
{
    t_color colors;
    colors.h = 1 * fr->iter;
    colors.s = 0.50;
    colors.v = 0.50;
    while (colors.h > 360)
        colors.h = colors.h - 360;
    hsv_to_rgb(&colors);
    ft_rgb(&colors);
    my_mlx_pixel_put(fr, fr->x, fr->y, colors.rgb);
}