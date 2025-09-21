#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    int last = 10;  
    while (number > 0) {
        int digit = number % 10;   // текущая цифра
        if (digit >= last) {       // проверка: нарушен порядок
            printf("NO");
            return 0;
        }
        last = digit;              // обновляем "предыдущую" цифру
        number /= 10;              // убираем последнюю цифру
    }

    printf("YES");
    return 0;
}
