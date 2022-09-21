/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenesca <amenesca@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:24:07 by amenesca          #+#    #+#             */
/*   Updated: 2022/09/20 15:25:12 by amenesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void fractol_error_mandelbrot(t_fractol *fr)
{
    ft_putendl_fd("Write only mandelbrot.", 2);
    mlx_destroy_image(fr->mlx, fr->img);
	mlx_destroy_window(fr->mlx, fr->mlx_win);
	exit (0);
}

void fractol_error_julia(t_fractol *fr)
{
    ft_putendl_fd("Write only julia, cr and ci.", 2);
    mlx_destroy_image(fr->mlx, fr->img);
	mlx_destroy_window(fr->mlx, fr->mlx_win);
	exit (0);
}

int test_fractol_args(char *str)
{
    if (ft_strnstr(str, "mandelbrot", 11))
        return (0);
    if (ft_strnstr(str, "julia", 6))
        return (0);
    return (1);
}

void    fractol_error_args(t_fractol *fr)
{
    ft_putendl_fd("Wrong arguments try:", 2);
    ft_putendl_fd("julia with cr and ci", 2);
    ft_putendl_fd("or", 2);
    ft_putendl_fd("mandelbrot", 2);
    mlx_destroy_image(fr->mlx, fr->img);
	mlx_destroy_window(fr->mlx, fr->mlx_win);
	exit (0);
}