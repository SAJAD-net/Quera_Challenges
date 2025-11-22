#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int mid = n / 2;

    for (int i = 0; i < mid; i++) {
        for (int s = 0; s < mid - i; s++) printf(" ");
        for (int k = 0; k < 2*i + 1; k++) printf("*");
        for (int s = 0; s < 2 * (mid - i); s++) printf(" ");
        for (int k = 0; k < 2*i + 1; k++) printf("*");

        printf("\n");
    }

    for (int i = 0; i < n; i++) printf("*");
    for (int i = 0; i < n; i++) printf("*");
    printf("\n");

    for (int i = mid - 1; i >= 0; i--) {
        for (int s = 0; s < mid - i; s++) printf(" ");
        for (int k = 0; k < 2*i + 1; k++) printf("*");
        for (int s = 0; s < 2 * (mid - i); s++) printf(" ");
        for (int k = 0; k < 2*i + 1; k++) printf("*");

        printf("\n");
    }

    return 0;
}

