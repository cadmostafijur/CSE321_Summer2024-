#include <stdio.h>
#include <stdlib.h>

void print_odd_even(int arrr[], int n) {
    for (int k = 0; k < n; k++) {
        if (arrr[k] % 2 == 0)

            printf("%d is even\n", arrr[k]);

        else
        
            printf("%d is odd\n", arrr[k]);

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
    
    print_odd_even(arrr, n);

    return 0;
}
