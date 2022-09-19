#include <stdio.h>
#include <math.h>

struct RGB
{
	unsigned char R;
	unsigned char G;
	unsigned char B;
};

struct HSV
{
	double H;
	double S;
	double V;
};

struct RGB HSVToRGB(struct HSV hsv) {
	double r = 0, g = 0, b = 0;

	if (hsv.S == 0)
	{
		r = hsv.V;
		g = hsv.V;
		b = hsv.V;
	}
	else
	{
		int i;
		double f, p, q, t;

		if (hsv.H == 360)
			hsv.H = 0;
		else
			hsv.H = hsv.H / 60;

		i = (int)trunc(hsv.H);
		f = hsv.H - i;

		p = hsv.V * (1.0 - hsv.S);
		q = hsv.V * (1.0 - (hsv.S * f));
		t = hsv.V * (1.0 - (hsv.S * (1.0 - f)));

		if (i == 0)
        {
			r = hsv.V;
			g = t;
			b = p;
        }
		if (i == 1)
        {
			r = q;
			g = hsv.V;
			b = p;
        }
		if (i == 2)
        {
			r = p;
			g = hsv.V;
			b = t;
        }
		if (i == 3)
        {
			r = p;
			g = q;
			b = hsv.V;
        }
		if (i = 4)
        {
			r = t;
			g = p;
			b = hsv.V;
        }
		if (i == 5)
        {
			r = hsv.V;
			g = p;
			b = q;
		}
	}
	struct RGB rgb;
	rgb.R = r * 255;
	rgb.G = g * 255;
	rgb.B = b * 255;

	return rgb;
}

int main(void)
{
    struct HSV hsv;
    hsv.H = 250.000;
    hsv.S = 0.5000;
    hsv.V = 0.5000;
    struct RGB rgb = HSVToRGB(hsv);
    printf("%u\n%u\n%u\n", rgb.R, rgb.G, rgb.B);
    return (0);
}