#include "../includes/fractol.h"

void	put_colors(t_fractol fr, t_image img)
{
	if (fr.iter >= 0 && fr.iter <= 10)
		my_mlx_pixel_put(&img, fr.x, fr.y, 0x483d8b);
	if (fr.iter > 10 && fr.iter < 20)
		my_mlx_pixel_put(&img, fr.x, fr.y, 0x6A5ACD);
	if (fr.iter >= 20 && fr.iter <= 30)
		my_mlx_pixel_put(&img, fr.x, fr.y, 0x7B68EE);
	if (fr.iter > 30 && fr.iter < 40)
		my_mlx_pixel_put(&img, fr.x, fr.y, 0x8470FF);
	if (fr.iter >= 40 && fr.iter <= 50)
		my_mlx_pixel_put(&img, fr.x, fr.y, 0x0000CD);
	if (fr.iter > 50 && fr.iter < 60)
		my_mlx_pixel_put(&img, fr.x, fr.y, 0x4169E1);
	if (fr.iter >= 60 && fr.iter <= 70)
		my_mlx_pixel_put(&img, fr.x, fr.y, 0x0000FF);
	if (fr.iter > 70 && fr.iter < 80)
		my_mlx_pixel_put(&img, fr.x, fr.y, 0x1E90FF);
	if (fr.iter >= 80 && fr.iter <= 90)
		my_mlx_pixel_put(&img, fr.x, fr.y, 0x00BFFF);
	if (fr.iter > 90 && fr.iter <= 100)
		my_mlx_pixel_put(&img, fr.x, fr.y, 0x87CEEB);
}