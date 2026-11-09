#include <stdio.h>

int main() {
    int n;
    printf("Введите количество чисел (n): ");
    scanf("%d", &n);

    int A;
    printf("Введите A: ");
    scanf("%d", &A);

    int sum = 0;
    int val;

    printf("Введите %d чисел:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &val);

        if (!((val >= -A && val <= -A / 2) || (val > A))) {
            sum += val;
        }
    }

    printf("Сумма = %d\n", sum);

    return 0;
}
