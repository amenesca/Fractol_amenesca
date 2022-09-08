#ifndef FRACTOL_H
# define FRACTOL_H

# include "../mlx/mlx.h"
# include "../libft/libft.h"
# include <math.h>

# define WIN_X 600
# define WIN_Y 600
# define MAX_ITER 80

typedef struct s_fractol
{
	void	*mlx;
	void	*mlx_win;
    double	min_r;
	double	max_r;
	double	min_i;
	double	max_i;
	double	zr;
	double	zi;
	double	cr;
	double	ci;
	int		x;
	int		y;
	int		iter;
}	t_fractol;

typedef struct s_image
{
	int		color;
	void	*image;
	int		pixel;
	int		pixel_bits;
	int		line_bytes;
	int		endian;
	char	*buffer;
} t_image;

void	draw_mandelbrot(t_fractol fr);
void    put_mandelbrot(t_fractol fr);
void    put_julia(t_fractol fr);
void	draw_julia(t_fractol fr);
void	put_colors(t_fractol fr);
int		handle_keys(int button, t_fractol *fr);
int		handle_mouse(int button, int x, int y, t_fractol *fr);
void	put_image(t_fractol fr, t_image img);

#endif
