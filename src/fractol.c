#include "../includes/fractol.h"

int main(int argc, char *argv[])
{
	t_fractol	fr;

	fr.min_r = -2;
	fr.max_r = 2;
	fr.min_i = -1.5;
	fr.max_i = fr.min_i + (fr.max_r - fr.min_r) * ((double)WIN_Y / (double)WIN_X);
	if (argc == 1 || argc > 2)
	{
		ft_putendl_fd("Invalid Arguments, try: mandelbrot or julia", 1);
		return (1);
	}
	fr.mlx = mlx_init();
	fr.mlx_win = mlx_new_window(fr.mlx, WIN_X, WIN_Y, "Fractol");
	if (ft_strnstr(argv[1], "mandelbrot", 11))
		draw_mandelbrot(fr);
	if (ft_strnstr(argv[1], "julia", 6))
		draw_julia(fr);
	mlx_key_hook(fr.mlx_win, handle_keys, &fr);
	mlx_mouse_hook(fr.mlx_win, handle_mouse, &fr);
	mlx_loop(fr.mlx);
	return 0;
}
