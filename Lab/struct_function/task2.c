#include <stdio.h>
int isPerfect(int numm) {
    int sum = 0;
    for (int i = 1; i <= numm / 2; i++) {

        if (numm % i == 0) {
            sum += i;
        }
    }
    return sum == numm;
}

void perfect__numms(int s, int e) {
    for (int i = s; i <= e; i++) {
        if (isPerfect(i)) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int s, e;

    printf("Start num: ");
    scanf("%d", &s);
    printf("End num: ");
    scanf("%d", &e);

    perfect__numms(s, e);

    return 0;
}

