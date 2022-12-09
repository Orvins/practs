#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>


void * any_func(void * args) {
	int id1 = 1, l;
	for (l = 0; l < 10; l++) {
		printf("Child Thread. Iteration: %d\n", id1);
		id1++;
		sleep(1);
	}
	return NULL;
}

int main(void) {
	pthread_t thread;
	int result, i, id = 1;
	result = pthread_create(&thread, NULL, &any_func, NULL);
	if (result != 0) {
		fprintf(stderr, "Error\n");
		return 1;
	}
	for (i = 0; i < 10; i++) {
		printf("Main Thread. Iteration: %d\n", id);
		id++;
		sleep(1);
	}
	while(1);
	return 0;
}
