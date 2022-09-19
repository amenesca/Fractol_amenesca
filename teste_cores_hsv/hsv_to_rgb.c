#include <math.h>  

typedef struct s_color
{
    int R;
    int G;
    int B;
    int RGB;
} t_color;

t_color hsv_to_rgb(double H, double S, double V)
{
    double M;
    double m;
    double z;

    t_color colors;

    M = 255 * V;
    m = M * (1 - S);
    z = (M - m) * (1 - fabs(remainder((H / 60),  2) - 1));

    if (H >= 0 && H < 60)
    {
        colors.R = M;
        colors.G = z + m;
        colors.B = m;
    }
    if (H >= 60 && H < 120)
    {
        colors.R = z + m;
        colors.G = M;
        colors.B = m;
    }

    if (H >= 120 && H < 180)
    {
        colors.R = m;
        colors.G = M;
        colors.B = z + m;
    }
    if (H >= 180 && H < 240)
    {
        colors.R = m;
        colors.G = z + m;
        colors.B = M;
    }
    if (H >= 240 && H < 300)
    {
        colors.R = z + m;
        colors.G = m;
        colors.B = M;
    }
    if (H >= 300 && H < 360)
    {
        colors.R = M;
        colors.G = m;
        colors.B = z + m;
    }
}

#include <stdio.h>
int main(void)
{
    double H = 60;
    double S = 0.5;
    double V = 0.5;
    t_color colors = hsv_to_rgb(H, S, V);
    printf("%u\n%d\n%d\n", colors.R, colors.G, colors.B);
    return (0);
}