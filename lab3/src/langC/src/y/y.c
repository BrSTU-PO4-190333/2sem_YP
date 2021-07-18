#include "y.h"

double y(double x, double a, double b)
{
    return cos(x)
    + (double) 1 / b * cos(a * x + 1)
    + (double) 1 / pow(b, 2) * cos(pow(a, 2) * x + 2)
    + (double) 1 / pow(b, 3) * cos(pow(a, 3) * x + 3)
    + (double) 1 / pow(b, 4) * cos(pow(a, 4) * x + 4);
}
