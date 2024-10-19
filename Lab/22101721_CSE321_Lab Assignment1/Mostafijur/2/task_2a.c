#include <stdio.h>

int main() {
    int x, y;
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    if (x > y) {
        int res = x - y;
        printf("Result of subtraction is: %d\n", res);
    } else if (x < y) {
        int res = x + y;
        printf("Result of addition is: %d\n", res);
    } else {
        int res = x * y;
        printf("Result of multiplication is: %d\n", res);
    }

    return 0;
}

