#include <stdio.h>

int main() {
    int n;
    printf("Введите размер массива: ");
    scanf("%d", &n);

    int arr[100];
    printf("Введите элементы массива:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int A;
    printf("Введите A: ");
    scanf("%d", &A);

    int sum = 0;

    for (int i = 0; i < n; i++) {
        if (!((arr[i] >= -A && arr[i] <= -A / 2) || (arr[i] > A))) {
            sum += arr[i];
        }
    }

    printf("Сумма = %d\n", sum);

    return 0;
}