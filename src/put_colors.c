#include "../includes/fractol.h"

void	put_colors(t_fractol *fr)
{
	if (fr->iter >= 0 && fr->iter <= 10)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x483d8b);
	if (fr->iter > 10 && fr->iter < 20)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x6A5ACD);
	if (fr->iter >= 20 && fr->iter <= 30)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x7B68EE);
	if (fr->iter > 30 && fr->iter < 40)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x8470FF);
	if (fr->iter >= 40 && fr->iter <= 50)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x0000CD);
	if (fr->iter > 50 && fr->iter < 60)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x4169E1);
	if (fr->iter >= 60 && fr->iter <= 70)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x0000FF);
	if (fr->iter > 70 && fr->iter < 80)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x1E90FF);
	if (fr->iter >= 80 && fr->iter <= 90)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x00BFFF);
	if (fr->iter > 90 && fr->iter <= 100)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x87CEEB);
	if (fr->iter >= 101 && fr->iter <= 110)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x483d8b);
	if (fr->iter > 110 && fr->iter < 120)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x6A5ACD);
	if (fr->iter >= 120 && fr->iter <= 130)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x7B68EE);
	if (fr->iter > 130 && fr->iter < 140)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x8470FF);
	if (fr->iter >= 140 && fr->iter <= 150)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x0000CD);
	if (fr->iter > 150 && fr->iter < 160)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x4169E1);
	if (fr->iter >= 160 && fr->iter <= 170)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x0000FF);
	if (fr->iter > 170 && fr->iter < 180)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x1E90FF);
	if (fr->iter >= 180 && fr->iter <= 190)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x00BFFF);
	if (fr->iter > 190 && fr->iter <= 200)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x87CEEB);
	if (fr->iter >= 201 && fr->iter <= 210)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x483d8b);
	if (fr->iter > 210 && fr->iter < 220)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x6A5ACD);
	if (fr->iter >= 220 && fr->iter <= 230)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x7B68EE);
	if (fr->iter > 230 && fr->iter < 240)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x8470FF);
	if (fr->iter >= 240 && fr->iter <= 250)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x0000CD);
	if (fr->iter > 250 && fr->iter < 260)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x4169E1);
	if (fr->iter >= 260 && fr->iter <= 270)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x0000FF);
	if (fr->iter > 270 && fr->iter < 280)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x1E90FF);
	if (fr->iter >= 280 && fr->iter <= 290)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x00BFFF);
	if (fr->iter > 290 && fr->iter <= 300)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x87CEEB);
	if (fr->iter >= 301 && fr->iter <= 310)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x483d8b);
	if (fr->iter > 310 && fr->iter < 320)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x6A5ACD);
	if (fr->iter >= 320 && fr->iter <= 330)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x7B68EE);
	if (fr->iter > 330 && fr->iter < 340)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x8470FF);
	if (fr->iter >= 340 && fr->iter <= 350)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x0000CD);
	if (fr->iter > 350 && fr->iter < 360)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x4169E1);
	if (fr->iter >= 360 && fr->iter <= 370)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x0000FF);
	if (fr->iter > 370 && fr->iter < 380)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x1E90FF);
	if (fr->iter >= 380 && fr->iter <= 390)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x00BFFF);
	if (fr->iter > 390 && fr->iter <= 400)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x87CEEB);
	if (fr->iter >= 401 && fr->iter <= 410)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x483d8b);
	if (fr->iter > 410 && fr->iter < 420)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x6A5ACD);
	if (fr->iter >= 420 && fr->iter <= 430)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x7B68EE);
	if (fr->iter > 430 && fr->iter < 440)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x8470FF);
	if (fr->iter >= 440 && fr->iter <= 450)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x0000CD);
	if (fr->iter > 450 && fr->iter < 460)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x4169E1);
	if (fr->iter >= 460 && fr->iter <= 470)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x0000FF);
	if (fr->iter > 470 && fr->iter < 480)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x1E90FF);
	if (fr->iter >= 480 && fr->iter <= 490)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x00BFFF);
	if (fr->iter > 490 && fr->iter <= 500)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x87CEEB);
	if (fr->iter >= 501 && fr->iter <= 510)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x483d8b);
	if (fr->iter > 510 && fr->iter < 520)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x6A5ACD);
	if (fr->iter >= 520 && fr->iter <= 530)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x7B68EE);
	if (fr->iter > 530 && fr->iter < 540)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x8470FF);
	if (fr->iter >= 540 && fr->iter <= 550)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x0000CD);
	if (fr->iter > 550 && fr->iter < 560)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x4169E1);
	if (fr->iter >= 560 && fr->iter <= 570)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x0000FF);
	if (fr->iter > 570 && fr->iter < 580)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x1E90FF);
	if (fr->iter >= 580 && fr->iter <= 590)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x00BFFF);
	if (fr->iter > 590 && fr->iter <= 600)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x87CEEB);
	if (fr->iter >= 601 && fr->iter <= 610)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x483d8b);
	if (fr->iter > 610 && fr->iter < 620)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x6A5ACD);
	if (fr->iter >= 620 && fr->iter <= 630)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x7B68EE);
	if (fr->iter > 630 && fr->iter < 640)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x8470FF);
	if (fr->iter >= 640 && fr->iter <= 650)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x0000CD);
	if (fr->iter > 650 && fr->iter < 660)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x4169E1);
	if (fr->iter >= 660 && fr->iter <= 670)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x0000FF);
	if (fr->iter > 670 && fr->iter < 680)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x1E90FF);
	if (fr->iter >= 680 && fr->iter <= 690)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x00BFFF);
	if (fr->iter > 690 && fr->iter <= 700)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x87CEEB);
	if (fr->iter >= 701 && fr->iter <= 710)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x483d8b);
	if (fr->iter > 710 && fr->iter < 720)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x6A5ACD);
	if (fr->iter >= 720 && fr->iter <= 730)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x7B68EE);
	if (fr->iter > 730 && fr->iter < 740)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x8470FF);
	if (fr->iter >= 740 && fr->iter <= 750)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x0000CD);
	if (fr->iter > 750 && fr->iter < 760)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x4169E1);
	if (fr->iter >= 760 && fr->iter <= 770)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x0000FF);
	if (fr->iter > 770 && fr->iter < 780)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x1E90FF);
	if (fr->iter >= 780 && fr->iter <= 790)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x00BFFF);
	if (fr->iter > 790 && fr->iter <= 800)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x87CEEB);
	if (fr->iter >= 801 && fr->iter <= 810)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x483d8b);
	if (fr->iter > 810 && fr->iter < 820)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x6A5ACD);
	if (fr->iter >= 820 && fr->iter <= 830)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x7B68EE);
	if (fr->iter > 830 && fr->iter < 840)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x8470FF);
	if (fr->iter >= 840 && fr->iter <= 850)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x0000CD);
	if (fr->iter > 850 && fr->iter < 860)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x4169E1);
	if (fr->iter >= 860 && fr->iter <= 870)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x0000FF);
	if (fr->iter > 870 && fr->iter < 880)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x1E90FF);
	if (fr->iter >= 880 && fr->iter <= 890)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x00BFFF);
	if (fr->iter > 890 && fr->iter <= 900)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x87CEEB);
	if (fr->iter >= 901 && fr->iter <= 910)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x483d8b);
	if (fr->iter > 910 && fr->iter < 920)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x6A5ACD);
	if (fr->iter >= 920 && fr->iter <= 930)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x7B68EE);
	if (fr->iter > 930 && fr->iter < 940)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x8470FF);
	if (fr->iter >= 940 && fr->iter <= 950)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x0000CD);
	if (fr->iter > 950 && fr->iter < 960)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x4169E1);
	if (fr->iter >= 960 && fr->iter <= 970)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x0000FF);
	if (fr->iter > 970 && fr->iter < 980)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x1E90FF);
	if (fr->iter >= 980 && fr->iter <= 990)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x00BFFF);
	if (fr->iter > 990 && fr->iter <= 1000)
		my_mlx_pixel_put(fr, fr->x, fr->y, 0x87CEEB);
}