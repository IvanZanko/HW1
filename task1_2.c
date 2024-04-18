#include <stdio.h>
#include <stdint.h>

int main() {
    uint32_t N;
    printf("Введите беззнаковое 32-битное целое число: ");
    scanf("%u", &N);

    // Извлекаем старший байт числа N
    uint8_t most_significant_byte = (N >> 24) & 0xFF;

    // Инвертируем биты старшего байта
    most_significant_byte = ~most_significant_byte;

    // Формируем новое число, заменяя старший байт
    N = (N & 0x00FFFFFF) | (((uint32_t)most_significant_byte) << 24);

    printf("Результат: %u\n", N);
    return 0;
}