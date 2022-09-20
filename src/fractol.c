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

	(void)argc;
	/*if (argc == 1 || argc > 2)
	{
		ft_putendl_fd("Invalid Arguments, try: mandelbrot or julia", 1);
		return (1);
	}*/
	mlx_fractol(&fr);
	if (ft_strnstr(argv[1], "mandelbrot", 11))
		fr.what_fractol = 1;
	if (ft_strnstr(argv[1], "julia", 6))
	{
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
