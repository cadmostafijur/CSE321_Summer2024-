#include <stdio.h> 
#include <stdlib.h> 
//using bubble_Sort algo
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

int main(int argc, char *argv[]) { 
    if (argc < 2) { 

        printf("%s\n", argv[0]);
        return 1; 

    }

    int n = argc - 1; 
    int arrr[n]; 

    for (int i = 0; i < n; i++) { 

        arrr[i] = atoi(argv[i+1]); 

    }

    bubble_Sort(arrr, n); 
    //descending order
    printf("Sorted array in Descending Order: "); 
    for (int i = 0; i < n; i++) { 

        printf("%d ", arrr[i]); 

    }

    printf("\n"); 
    return 0; 
}
