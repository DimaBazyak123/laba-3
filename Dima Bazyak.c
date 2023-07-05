#include <stdio.h>

// Рекурсивна функція для обчислення кількості чисел із р розрядів
int countNumbers(int r, int prev_digit, int prev_prev_digit) {
    if (r == 0) {
        return 1;
    }

    int count = 0;
    for (int digit = 5; digit <= 9; digit += 4) {
        if (digit != prev_digit || digit != prev_prev_digit) {
            count += countNumbers(r - 1, digit, prev_digit);
        }
    }

    return count;
}

int main() {
    int r;
    scanf("%d", &r);

    int count = countNumbers(r, -1, -1);
    printf("%d\n", count);

    return 0;
}