#include "lab.h"

void lab()
{
    char surname[20];
    printf("Ваша фамилия (Галанин): ");
    scanf("%s", surname);
    int a = strlen(surname);

    double b = 0.0;
    while (2 > b || b > 10)
    {
        printf("b c[2, 10] (8): ");
        scanf("%lf", &b);
    }

    double x;
    printf("Стартовая точка (5): ");
    scanf("%lf", &x);

    double step;
    printf("Шаг (0.001): ");
    scanf("%lf", &step);

    int number_of_iterations;
    printf("Число итераций (100): ");
    scanf("%d", &number_of_iterations);

    int max_fails;
    printf("Максимальное число неудач (3): ");
    scanf("%d", &max_fails);

    get_table_with_extremum(x, a, b, step, max_fails, number_of_iterations);
}
