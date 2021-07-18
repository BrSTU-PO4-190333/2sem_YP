#include "option_5.h"

double func(double x, double y, double z)
{
    return x * y * pow(z, 2)
        + 2 * pow(x, 2) * pow(y, 2)
        + 3 * pow(y, 2);
}

double derivativeX(double x, double y, double z)
{
    return y * pow(z, 2)
        + 4 * x * pow(y, 2);
}

double derivativeY(double x, double y, double z)
{
    return x * pow(z, 2)
        + 4 * pow(x, 2) * y
        + 6 * y;
}

double derivativeZ(double x, double y, double z)
{
    return 2 * x * y * z;
}
