/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenesca <amenesca@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:11:25 by amenesca          #+#    #+#             */
/*   Updated: 2022/09/23 12:20:45 by amenesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int	main(int argc, char *argv[])
{
	t_fractol	fr;
	int			test_args;

	test_args = fractol_error(argc, argv);
	mlx_fractol(&fr);
	if (test_args == 1)
		fr.what_fractol = 1;
	if (test_args == 2)
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
