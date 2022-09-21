/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenesca <amenesca@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:11:25 by amenesca          #+#    #+#             */
/*   Updated: 2022/09/20 15:12:41 by amenesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int	main(int argc, char *argv[])
{
	t_fractol	fr;
	
	mlx_fractol(&fr);
	if (test_fractol_args(argv[1]) == 1)
		fractol_error_args(&fr);
	if (ft_strnstr(argv[1], "mandelbrot", 11))
	{
		if (argc != 2)
			fractol_error_mandelbrot(&fr);
		fr.what_fractol = 1;
	}
	if (ft_strnstr(argv[1], "julia", 6))
	{
		if (argc != 4)
			fractol_error_julia(&fr);
		fr.cr = my_atof(argv[2]);
		fr.ci = my_atof(argv[3]);
		fr.what_fractol = 0;
	}
	mlx_key_hook(fr.mlx_win, handle_keys, &fr);
	mlx_mouse_hook(fr.mlx_win, handle_mouse, &fr);
	mlx_hook(fr.mlx_win, 17, 0L, handle_close, &fr);
	mlx_loop_hook(fr.mlx, render_fr, &fr);
	mlx_loop(fr.mlx);
	return (0);
}
