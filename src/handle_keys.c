#include "../includes/fractol.h"

#include "stdio.h"
int handle_keys(int button, t_fractol *fr)
{
//	printf("%d", button);
	if (button == 53)
		exit (0);
	return (*fr).iter;
}

int handle_mouse(int button, int x, int y, t_fractol *fr)
{
	int up;
	int down;
	(void)x;
	(void)y;

	up = 5;
	down = 4;
	if (button == up)
	{
		fractol_zoom_in((*fr));
	}
	if (button == down)
	{
		fractol_zoom_out((*fr));
	}
	return (*fr).iter;
}
