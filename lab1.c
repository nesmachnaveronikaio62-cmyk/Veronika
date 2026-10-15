#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

void calculate(double x) {
    double y;
    printf("x = %.2lf: ", x);

    if (x >= 2 && x <= 7) {
        y = x * x * x + 14;
        printf("y = %.4lf\n", y);
    }
    else if ((x > -13 && x <= -3) || x > 14) {
        y = -4 * x * x * x + 3 * x - 7;
        printf("y = %.4lf\n", y);
    }
    else {
        printf("Функція не існує\n");
    }
}

int main() {
    // Встановлюємо кодування UTF-8 для консолі Windows
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    double test_cases[] = { 3.0, -5.0, 15.0, 0.0 };
    int count = sizeof(test_cases) / sizeof(test_cases[0]);

    printf("Приклади:\n");
    for (int i = 0; i < count; i++) {
        calculate(test_cases[i]);
    }

    double x;
    printf("\nВведіть x: ");
    if (scanf("%lf", &x) == 1) {
        calculate(x);
    }

    return 0;
}