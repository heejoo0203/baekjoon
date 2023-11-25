#include <stdio.h>

int findGenerator(int n) {
    for (int i = 1; i <= n; i++) {
        int sum = i;
        int temp = i;

        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        if (sum == n) {
            return i;
        }
    }

    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    int result = findGenerator(n);

    printf("%d\n", result);

    return 0;
}