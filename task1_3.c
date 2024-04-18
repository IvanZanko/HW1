#include <stdio.h>

int main() {
    int n, x, unique_num = 0;
    
    // Считываем количество чисел
    scanf("%d", &n);
    
    // Вычисляем XOR всех чисел
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        unique_num ^= x;
    }
    
    // Выводим результат
    printf("%d\n", unique_num);
    
    return 0;
}