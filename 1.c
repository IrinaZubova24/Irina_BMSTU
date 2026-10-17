#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    do {
        scanf("%d", &n);
        if (n < 0) {
            break;
        }
        sum += n;
    } while (n > 0);
    printf("sum: %d\n", sum);
    return 0;
}