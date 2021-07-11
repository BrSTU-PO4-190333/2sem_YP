#include "lab.h"

void lab()
{
    char name[20];
    printf("Ваше имя: ");
    scanf("%s", name);

    char surname[20];
    printf("Ваша фамилия: ");
    scanf("%s", surname);

    struct params_for_f data; //для передачи параметров в функцию

    char volves[] = "AaEeIiOoUuYyАаЕеЁёИиОоУуЫыЭэЮюЯя";
    data.a = 0;
    for (int i = 0; i < strlen(surname); i++)
    {
        for (int j = 0; j < strlen(volves); j++)
        {
            if (surname[i] == volves[j])
            {
                data.a++;
            }
        }
    }

    data.b = strlen(name) % 2 == 0 ? 0 : 1;
    data.c = (double) strlen(surname) / strlen(name);
    data.d = strlen(name) % 2 == 0 ? 1 : 0;
    data.f1 = strlen(surname) % 2 == 0 ? 1 : 0;
    data.f2 = strlen(surname);
    data.g1 = strlen(surname) % 2 == 0 ? 1 : 0;
    data.g2 = strlen(name);
    data.h1 = (data.f2 + data.a) * data.b;
    data.h2 = (data.g2 + data.a) * data.d;

    double x_left;
    printf("Левая граница: ");
    scanf("%lf", &x_left);

    double x_right;
    printf("Правая граница: ");
    scanf("%lf", &x_right);

    double step;
    printf("Шаг: ");
    scanf("%lf", &step);

    task0(data, x_left, x_right, step);
    task1(data, x_left, x_right, step);
    task2(data, x_left, x_right, step);
}
