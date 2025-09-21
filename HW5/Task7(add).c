#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    int last = 10;  
    while (number > 0) {
        int digit = number % 10;   // ������� �����
        if (digit >= last) {       // ��������: ������� �������
            printf("NO");
            return 0;
        }
        last = digit;              // ��������� "����������" �����
        number /= 10;              // ������� ��������� �����
    }

    printf("YES");
    return 0;
}
