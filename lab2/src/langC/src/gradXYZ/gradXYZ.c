#include "gradXYZ.h"

double gradXYZ(double x, double y, double z)
{
    return sqrt(
        pow(derivativeX(x, y, z), 2)
        + pow(derivativeY(x, y, z), 2)
        + pow(derivativeZ(x, y, z), 2)
    );
}
