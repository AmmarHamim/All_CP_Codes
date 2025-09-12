#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int x[n - 1];
        for (int i = 0; i < n - 1; ++i) {
            scanf("%d", &x[i]);
        }

        int a[n];
        a[0] = 501; // Set a_1 = 501

        // Calculate a[i] for i > 1
        for (int i = 1; i < n; ++i) {
            a[i] = (a[i - 1] + x[i - 1]) % 501;
        }

        // Output the array a
        for (int i = 0; i < n; ++i) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }

    return 0;
}
