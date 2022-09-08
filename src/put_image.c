#include "../includes/fractol.h"

void put_image(t_fractol fr, t_image img)
{
	char *buffer = mlx_get_data_addr(img.image, &img.pixel_bits, &img.line_bytes, &img.endian);
	img.color = 0xABCDEF;
	if (img.pixel_bits != 32)
		img.color = mlx_get_color_value(fr.mlx, img.color);

	fr.y = -1
	while(++fr.y < WIN_Y)
	{
		fr.x = -1
		while(++fr.x < WIN_X)
	{
		img.pixel = (fr.y * img.line_bytes) + (fr.x * 4);
	
		if (img.endian == 1)        // Most significant (Alpha) byte first
		{
			img.buffer[pixel + 0] = (img.color >> 24);
			img.buffer[pixel + 1] = (img.color >> 16) & 0xFF;
			img.buffer[pixel + 2] = (img.color >> 8) & 0xFF;
			img.buffer[pixel + 3] = (img.color) & 0xFF;
		}
		else if (img.endian == 0)   // Least significant (Blue) byte first
		{
			img.buffer[pixel + 0] = (img.color) & 0xFF;
			img.buffer[pixel + 1] = (img.color >> 8) & 0xFF;
			img.buffer[pixel + 2] = (img.color >> 16) & 0xFF;
			img.buffer[pixel + 3] = (img.color >> 24);
		}
	}
    mlx_loop(fr.mlx);
}
