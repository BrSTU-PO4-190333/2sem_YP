#include "get_table_with_extremum.h"

void get_table_with_extremum(double x, double a, double b, double step, int max_fails, int number_of_iterations)
{
    printf(
        "| %10s | %16s | %16s | %8s |\n",
        "Iterations", "x", "y", "min/max"
    );
    printf(
        "| %10s | %16s | %16s | %8s |\n",
        "----------", "----------------", "----------------", "--------"
    );

    int fails = 0;
    for(int i = 1; fails <= max_fails && i <= number_of_iterations; i++)
    {
        x += step;

        printf(
            "| %10d | %16.8lf | %16.8lf ",
            i, x, y(x, a, b)
        );

        if(y(x - step, a, b) > y(x, a, b) && y(x, a, b) < y(x + step, a, b))
        {
            printf("| %8s |\n", "min");
            fails = 1;
        }
        else if(y(x - step, a, b) < y(x, a, b) && y(x, a, b) > y(x + step, a, b))
        {
            printf("| %8s |\n", "max");
            fails = 1;
        }
        else
        {
            printf("| %8s |\n", "-");
            fails++;
        }
    }
}
