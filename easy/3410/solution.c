#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[101] = {1};

    for (int i = 0; i < n; i++) {

        for (int j = 0; j <= i; j++) {
            printf("%d", a[j]);
            if (j < i) printf(" ");
        }
        printf("\n");

        for (int j = i + 1; j > 0; j--) {
            a[j] = a[j] + a[j - 1];
        }
    }

    return 0;
}

