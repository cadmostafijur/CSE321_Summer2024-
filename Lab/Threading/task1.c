#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *th_func1(void *arg1);
void *th_func2(void *arg2);
void *th_func3(void *arg3);
void *th_func4(void *arg4);
void *th_func5(void *arg5);

int a1 = 4;
int a2 = 5;
int a3 = 6;
int a4 = 7;
int a5 = 8;

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

	printf("thread-1 running\n");

	printf("thread-1 closed\n");

	sleep(1);
}

void *th_func2(void *arg2){

	int *y=arg2;

	printf("thread-2 running\n");

	printf("thread-2 closed\n");

	sleep(1);
}

void *th_func3(void *arg3){

	int *z=arg3;

	printf("thread-3 running\n");

	printf("thread-3 closed\n");

	sleep(1);
}

void *th_func4(void *arg4){
	int *p=arg4;

	printf("thread-4 running\n");

	printf("thread-4 closed\n");

	sleep(1);
}

void *th_func5(void *arg5){

	int *q=arg5;

	printf("thread-5 running\n");

	printf("thread-5 closed\n");
	
	sleep(1);
}
