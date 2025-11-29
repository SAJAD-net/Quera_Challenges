#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int first = 1;

    for (int i = a + 1; i < b; i++) {
        int is_prime = 1;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime && i > 1) {
            printf("%s%d", first ? "" : ",", i);
            first = 0;
        }
    }

    return 0;
}

