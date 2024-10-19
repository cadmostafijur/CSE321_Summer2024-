#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *th_func1(void *arg1);
void *th_func2(void *arg2);
void *th_func3(void *arg3);
void *th_func4(void *arg4);
void *th_func5(void *arg5);

int a1[5] = {1, 2, 3, 4, 5};
int a2[5] = {6, 7, 8, 9, 10};
int a3[5] = {11, 12, 13, 14, 15};
int a4[5] = {16, 17, 18, 19, 20};
int a5[5] = {21, 22, 23, 24, 25};

int main(){


	pthread_t t1;
	pthread_t t2;
	pthread_t t3;
	pthread_t t4;
	pthread_t t5;

	// pthread create
	pthread_create(&t1,NULL,(void *)th_func1,(void *)a1);
	pthread_create(&t2,NULL,(void *)th_func2,(void *)a2);
	pthread_create(&t3,NULL,(void *)th_func3,(void *)a3);
	pthread_create(&t4,NULL,(void *)th_func4,(void *)a4);
	pthread_create(&t5,NULL,(void *)th_func5,(void *)a5);

	// pthread join
	pthread_join(t1,NULL);
	pthread_join(t2,NULL);
	pthread_join(t3,NULL);
	pthread_join(t4,NULL);
	pthread_join(t5,NULL);
	
	return 0;
}



void *th_func1(void *arg1){

	int *x=arg1;

	for (int i=0; i<=4; i++){

		printf("Thread 0 prints %d\n", x[i]);

	}
	sleep(1);
}

void *th_func2(void *arg2){

	int *y=arg2;

	for (int i=0; i<=4; i++){

		printf("Thread 1 prints %d\n", y[i]);

	}
	sleep(1);
}

void *th_func3(void *arg3){

	int *z=arg3;

	for (int i=0; i<=4; i++){

		printf("Thread 2 prints %d\n", z[i]);

	}
	sleep(1);
}

void *th_func4(void *arg4){

	int *p=arg4;

	for (int i=0; i<=4; i++){

		printf("Thread 3 prints %d\n", p[i]);

	}
	sleep(1);
}

void *th_func5(void *arg5){

	int *q=arg5;

	for (int i=0; i<=4; i++){
		
		printf("Thread 4 prints %d\n", q[i]);
	}
	sleep(1);
}
