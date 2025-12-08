#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char name[21];
    int max_unique = 0;

    for (int i = 0; i < n; i++) {
        scanf("%s", name);
        int freq[26] = {0};

        for (int j = 0; name[j]; j++) {
            freq[name[j] - 'a'] = 1;
        }

        int unique_count = 0;
        for (int j = 0; j < 26; j++) {
            unique_count += freq[j];
        }

        if (unique_count > max_unique) {
            max_unique = unique_count;
        }
    }

    printf("%d\n", max_unique);

    return 0;
}

