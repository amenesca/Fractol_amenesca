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

int fractol_error(int argc, char *argv[])
{
    if (argc == 1 || argc == 3 || argc > 4)
    {
        ft_putstr_fd("Wrong arguments try:\nmandelbrot;\njulia, cr, ci;", 2);
        exit (0);
    }
    if (ft_strnstr(argv[1], "mandelbrot", 11) && argc == 2)
        return (1);
    if (ft_strnstr(argv[1], "julia", 6) && argc == 4)
    {
        test_julia(argv[2], argv[3]);
        return (2);
    }
    ft_putstr_fd("Wrong arguments try:\nmandelbrot;\njulia, cr, ci;", 2);
    exit (0);    
}

void test_julia(char *argv1, char *argv2)
{
    int i;

    i = -1;
    while (argv1[++i])
    {
       if (ft_is_wrong_digit(argv1[i]))
        {
            ft_putstr_fd("cr must be a real number.", 2);
            exit (0);
        }
    }
    i = -1;
    while (argv2[++i])
    {
        if (ft_is_wrong_digit(argv2[i]))
        {
            ft_putstr_fd("ci must be a real number.", 2);
            exit (0);
        }
    }
}

int	ft_is_wrong_digit(int c)
{
	if ((c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122))
		return (1);
    if ((c >= 0 && c <= 44) || (c >= 58 && c <= 255))
        return (1);
	else
		return (0);
}