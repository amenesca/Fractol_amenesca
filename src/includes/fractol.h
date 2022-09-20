#ifndef FRACTOL_H
# define FRACTOL_H

# include "../mlx/mlx.h"
# include "../libft/libft.h"
# include <math.h>

# define WIN 1000
# define MAX_ITER 1000

typedef struct s_color
{
	int r;
	int g;
	int b;
	int i;
	double red;
	double green;
	double blue;
	double f;
	double p; 
	double q;
	double t;
	double h;
	double s;
	double v;
	int rgb;
} t_color

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
	int		render;
	int		what_fractol;
	void	*img;
	char	*addr;
  	int		bits_per_pixel;
  	int 	line_length;
  	int 	endian;
}	t_fractol;

void 	my_mlx_pixel_put(t_fractol *fr, int x, int y, int color);
void	draw_mandelbrot(t_fractol *fr);
void    put_mandelbrot(t_fractol *fr);
void    put_julia(t_fractol *fr);
void	draw_julia(t_fractol *fr);
void	put_colors(t_fractol *fr);
int		handle_keys(int button, t_fractol *fr);
int		handle_mouse(int button, int x, int y, t_fractol *fr);
void    fractol_zoom_in(t_fractol *fr);
void    fractol_zoom_out(t_fractol *fr);
int		render_fr(t_fractol *fr);
void    mlx_fractol(t_fractol *fr);
void	move(t_fractol *f, double distance, char direction);
double	my_atof(char *str);
double	check_signal(char *str);
size_t	nbsize_atof(double n);
void	hsv_to_rgb(t_color *colors);
void	rgb(t_color *colors);

#endif