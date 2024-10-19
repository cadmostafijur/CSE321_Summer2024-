#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

void bubble_Sort(int arrr[], int n) {
    int i, j, tem;

    for (i = 0; i < n-1; i++) {

        for (j = 0; j < n-i-1; j++) {

            if (arrr[j] < arrr[j+1]) {

                tem = arrr[j];
                arrr[j] = arrr[j+1];
                arrr[j+1] = tem;

            }
        }
    }
}

void print_odd_even(int arrr[], int n) {

    for (int i = 0; i < n; i++) {

        if (arrr[i] % 2 == 0)

            printf("%d is even\n", arrr[i]);

        else

            printf("%d is odd\n", arrr[i]);

    }
}

int main(int argc, char *argv[]) {

    if (argc < 2) {

        printf("%s \n", argv[0]);
        return 1;

    }

    int n = argc - 1;
    int arrr[n];

    for (int i = 0; i < n; i++) {

        arrr[i] = atoi(argv[i+1]);

    }

    pid_t pid = fork();

    if (pid < 0) {

        printf("fork failed\n");
        return 1;

    } 
    
    else if (pid == 0) {
        //descending order
        bubble_Sort(arrr, n);
        printf("Sorted array in Descending Order: ");
        for (int i = 0; i < n; i++) {

            printf("%d ", arrr[i]);
            
        }
        printf("\n");
    } 
    
    else {
        wait(NULL); 
        print_odd_even(arrr, n);
    }

    return 0;
}
