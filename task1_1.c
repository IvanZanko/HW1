#include <stdio.h>

int main() {
    int n, num, max_count = 0, current_count = 0, max_value = 0;

    // Считываем количество чисел
    scanf("%d", &n);

    // Считываем и обрабатываем последовательность чисел
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num > max_value) {
        max_value = num;
            current_count = 1;
        } else if (num == max_value) {
            current_count++;
        }
        if (current_count > max_count) {
            max_count = current_count;
        }
    }

        // Выводим результат
    printf("%d\n", max_count);

    return 0;
}