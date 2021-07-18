#include "lab.h"

void lab()
{
    double k;
    printf("Шаг (0.001): ");
    scanf("%lf", &k);

    double e;
    printf("Приближение (0.001): ");
    scanf("%lf", &e);

    int n;
    printf("Искать min - 1, max - 2 (1): ");
    scanf("%d", &n);

    // X
    double x_left;
    printf("Левая граница X (-5): ");
    scanf("%lf", &x_left);

    double x_right = x_left - 1;
    while (x_left > x_right)
    {
        printf("Правая граница X (5): ");
        scanf("%lf", &x_right);
    }

    double x = x_left - 1;
    while (x_left > x || x > x_right)
    {
        printf("Начальная точка X (1): ");
        scanf("%lf", &x);
    }
    // end X

    // Y
    double y_left;
    printf("Левая граница Y (-5): ");
    scanf("%lf", &y_left);

    double y_right = y_left - 1;
    while (y_left > y_right)
    {
        printf("Правая граница Y (5): ");
        scanf("%lf", &y_right);
    }

    double y = y_left - 1;
    while (y_left > y || y > y_right)
    {
        printf("Начальная точка Y (1): ");
        scanf("%lf", &y);
    }
    // end Y

    // Z
    double z_left;
    printf("Левая граница Z (-5): ");
    scanf("%lf", &z_left);

    double z_right = z_left - 1;
    while (z_left > z_right)
    {
        printf("Правая граница Z (5): ");
        scanf("%lf", &z_right);
    }

    double z = z_left - 1;
    while (z_left > z || z > z_right)
    {
        printf("Начальная точка Z (1): ");
        scanf("%lf", &z);
    }
    // end Z

    while(gradXYZ(x, y, z) > e)
    {
        x = x + pow(-1, n) * k * derivativeX(x, y, z);
        y = y + pow(-1, n) * k * derivativeY(x, y, z);
        z = z + pow(-1, n) * k * derivativeZ(x, y, z);
        if (
            (x_left > x || x > x_right)
            || (y_left > y || y > y_right)
            || (z_left > z || z > z_right)
        )
        {
            break;
        }
    }

    n % 2 == 0 ?
        printf("\nMax-ум функции:\n"):
        printf("\nMin-ум функции:\n");

    printf("f(\n");
    printf("\tx = %lf\n", x);
    printf("\ty = %lf\n", y);
    printf("\tz = %lf\n", z);
    printf(") = %lf\n", func(x, y, z));
}
