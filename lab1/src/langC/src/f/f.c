#include "f.h"

double f(double x, struct params_for_f data)
{
    return data.a * pow(x, 2)
        + data.b * pow(x, 3)
        - data.c * x
        - data.d * exp(x)
        + data.f1 * cos(data.f2 * x)
        + data.g1 * sin(data.g2 * x)
        + data.h1 * pow(cos(x), 2)
        + data.h2 * pow(sin(x), 2);
}
