#include "../includes/fractol.h"

size_t nbsize_atof(double n)
{
  size_t i;
  int x;

  x = (int)n;
  i = 0;
  if (x <= 0)
    i++;
  while (x != 0)
  {
    i++;
    x = x / 10;
  }
  return (i);
}

double check_signal(char *str)
{
  int i;

  i = 0;
  while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
  if (str[i] == '-')
    return (-1);
  else
    return (1);
}

double my_atof(char *str)
{
  double number;
  size_t size;
  int i;
  double signal;
  double p;

  i = 1;
  p = 1;
  signal = check_signal(str);
  number = (double)ft_atoi((const char *)str);
  if (signal < 0)
  {
    number = -number;
    i = 2;
  }
  size = nbsize_atof(number);
  while (str[size + i] >= '0' && str[size + i] <= '9')
  {
    number += (str[size + i] - 48) / pow(10, p);
    i++;
    p++;
  }
  return (number * signal);
}