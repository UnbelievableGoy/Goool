#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    if (n < 2) { puts("NO"); return 0; }
    if (n == 2) { puts("YES"); return 0; }
    if (n % 2 == 0) { puts("NO"); return 0; }

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) { puts("NO"); return 0; }
    }
    puts("YES");
    return 0;
}
