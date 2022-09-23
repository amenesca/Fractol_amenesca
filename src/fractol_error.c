/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenesca <amenesca@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:24:07 by amenesca          #+#    #+#             */
/*   Updated: 2022/09/23 12:36:54 by amenesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int	fractol_error(int argc, char *argv[])
{
	if (argc == 1 || argc == 3 || argc > 4)
	{
		ft_putstr_fd("Wrong arguments try:\nmandelbrot;\njulia, cr, ci;", 2);
		exit (0);
	}
	if (!ft_strcmp(argv[1], "mandelbrot") && argc == 2)
		return (1);
	if (!ft_strcmp(argv[1], "julia") && argc == 4)
	{
		test_julia(argv[2], argv[3]);
		return (2);
	}
	ft_putstr_fd("Wrong arguments try:\nmandelbrot;\njulia, cr, ci;", 2);
	exit (0);
}

void	test_julia(char *argv1, char *argv2)
{
	int	i;

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

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	i = 0;
	if (ft_strlen(s1) == 0 || ft_strlen(s2) == 0)
		return (*str1 - *str2);
	while (i <= ft_strlen(s1) && i <= ft_strlen(s2))
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}
