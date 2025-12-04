#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int weights[n];

    int max = 1;
    int index = 1;

    for (int i = 0; i < n; i++) {
        scanf("%d", &weights[i]);

        if (weights[i] > max) {
            max = weights[i];
            index = i + 1;
        }
    }

    printf("%d", index);

    return 0;
}

