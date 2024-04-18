#include <stdio.h>
#include <ctype.h>

int main() {
    int N;
    char c;
    
    // Считываем число N
    scanf("%d", &N);
    
    // Считываем сообщение, пока не встретим точку
    printf("Введите сообщение (латинские буквы и пробелы), заканчивающееся точкой:\n");
    while ((c = getchar()) != '.') {
        if (isalpha(c)) {
            // Кодируем букву по правилам шифра Цезаря
            if (isupper(c)) {
                printf("%c", 'A' + ((c - 'A' + N) % 26));
            } else {
                printf("%c", 'a' + ((c - 'a' + N) % 26));
            }
        } else if (c == ' ') {
            // Выводим пробел без изменений
            printf(" ");
        }
    }
    printf(".");
    
    return 0;
}