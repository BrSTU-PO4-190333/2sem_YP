#include "task2.h"

void task2(struct params_for_f data, double x_left, double x_right, double step)
{
    double e;
    printf("\nApproximation (1): ");
    scanf("%lf", &e);

    printf("f(x) ~= 0:\n");
    for (double x = x_left; x <= x_right; x += step)
    {
        double y = f(x, data);
        if (fabs(y) < fabs(e))
        {
            printf("f(%lf) = %lf\n", x, y);
        }
    }
}
