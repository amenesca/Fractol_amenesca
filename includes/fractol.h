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
	int		render;
	int		what_fractol;
	void	*img;
	char	*addr;
  	int		bits_per_pixel;
  	int 	line_length;
  	int 	endian;
}	t_fractol;

/*typedef struct s_image {
  void *img;
  char *addr;
  int bits_per_pixel;
  int line_length;
  int endian;
} t_image;*/

void 	my_mlx_pixel_put(t_fractol *fr, int x, int y, int color);
void	draw_mandelbrot(t_fractol fr);
void    put_mandelbrot(t_fractol fr);
void    put_julia(t_fractol fr);
void	draw_julia(t_fractol fr);
void	put_colors(t_fractol fr);
int		handle_keys(int button, t_fractol *fr);
int		handle_mouse(int button, int x, int y, t_fractol *fr);
void    fractol_zoom_in(t_fractol *fr);
void    fractol_zoom_out(t_fractol *fr);
int		render_fr(t_fractol *fr);
void    mlx_fractol(t_fractol *fr);

#endif