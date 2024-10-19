#include <stdio.h>
#include <pthread.h>
#include <string.h>

typedef struct {
    char name[100];
    int sum;
} Thread_Args;

int ascii_Sum(char *name) {

    int sum = 0;

    for (int i = 0; name[i] != '\0'; i++) {

        sum += name[i];

    }
    return sum;
}

void *SumThread(void *args) {

    Thread_Args *thread_args = (Thread_Args *)args;

    thread_args->sum = ascii_Sum(thread_args->name);

    pthread_exit(NULL);
}

void *ResultsThread(void *args) {

    Thread_Args *thread_args = (Thread_Args *)args;

    
    if (thread_args[0].sum == thread_args[1].sum && thread_args[1].sum == thread_args[2].sum) {

        printf("Youreka\n");

    } 
    else if (thread_args[0].sum == thread_args[1].sum || thread_args[0].sum == thread_args[2].sum || thread_args[1].sum == thread_args[2].sum) {
        
        printf("Miracle\n");

    } 
    
    else {

        printf("Hasta la vista\n");

    }

    pthread_exit(NULL);
}

int main() {

    pthread_t threads[4]; 

    Thread_Args thread_args[3]; 

    // char names[3][100] = {"Mostafijur", "Fifa", "Maruf"};
    char names[3][100] = {"Mostafijur", "Fifa", "Rahaman"};

    for (int i = 0; i < 3; i++) {

        strcpy(thread_args[i].name, names[i]); 

        pthread_create(&threads[i], NULL, SumThread, &thread_args[i]); 

    }
    
    for (int i = 0; i < 3; i++) {

        pthread_join(threads[i], NULL);

    }

    pthread_create(&threads[3], NULL, ResultsThread, thread_args);

    pthread_join(threads[3], NULL);

    return 0;
}
