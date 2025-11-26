#include <stdio.h>
#include <string.h>

int main() {
    int lines[5];
    char str[200];
    int j = 0;

    for (int i = 1; i <= 5; i++) {
        scanf("%s", str);

        if (strstr(str, "MOLANA") != NULL || strstr(str, "HAFEZ") != NULL) {
            lines[j++] = i;
        }
    }

    if (j == 0)
        printf("NOT FOUND!");
    else {
        for (int i = 0; i < j; i++)
            printf("%d ", lines[i]);
    }

    return 0;
}

