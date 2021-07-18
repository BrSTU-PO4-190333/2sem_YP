#include "task0.h"

void task0(struct params_for_f data, double x_left, double x_right, double step)
{
    double x1 = x_left, x2 = x_left + step;

    printf(
        "%12s\t%12s\t%12s\t%12s\t%12s\n",
        "#",
        "x1",
        "x2",
        "f1",
        "f2"
    );

    int i = 1;
    for (double x = x_left; x < x_right; x += step)
    {
        printf(
            "%12d\t%12.3f\t%12.3f\t%12.3f\t%12.3f\n",
            i,
            x1,
            x2,
            f(x1, data),
            f(x2, data)
        );
        x1 += step;
        x2 += step;
        i += 1;
    }
}
