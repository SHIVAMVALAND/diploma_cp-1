#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    do {
        sum += i * i;
        i++;
    } while (i <= n);
    printf("Sum = %d\n", sum);
    return 0;
}