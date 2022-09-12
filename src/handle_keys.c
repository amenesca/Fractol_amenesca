#include "../includes/fractol.h"

int handle_keys(int button, t_fractol *fr)
{
	if (button == 53)
		exit (0);
	return (*fr).iter;
}

#include <stdio.h>
int handle_mouse(int button, int x, int y, t_fractol *fr)
{
	printf("x:%d\ny:%d\nbutton:%d\n", x, y, button);
	if (button == 1)
	{
		
	}
	if (button == 5)
		fractol_zoom_in(fr);
	if (button == 4)
		fractol_zoom_out(fr);
	return (*fr).iter;
}