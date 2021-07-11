#include "task1.h"

void task1(struct params_for_f data, double x_left, double x_right, double step)
{
    struct
    {
        double value;
        double arg;
    } maxf;

    maxf.arg = x_left; //x
    maxf.value = f(x_left, data); // f(x) = y

    for (double x = x_left, i = 0; x <= x_right; x += step, i++)
    {
        if (maxf.value < f(x, data))
        {
            maxf.arg = x; //x
            maxf.value = f(x, data); // f(x) = y
        }
    }

    printf("\nМаксимальное значение\n");
    printf("f(%lf) = %lf\n", maxf.arg, maxf.value);
}
