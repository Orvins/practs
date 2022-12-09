#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>

struct thread_arg {
	char * name;
	char * str;
	int num;
};

void * any_func(void * arg) {
	int i;
	struct thread_arg targ = *(struct thread_arg *) arg;
	for (i = 1; i <= targ.num; i++){
		printf("Thread %s. %s %d\n",targ.name, targ.str, i );
		sleep(1);
	}
	return NULL;
}

int main(void) {
	pthread_t thread1, thread2, thread3, thread4;

	struct thread_arg targ;
	struct thread_arg targ1;
	struct thread_arg targ2;
	struct thread_arg targ3;

	targ.name = "Thread1";
	targ.str = "|-|-|-|-|";
	targ.num = 1;

	targ1.name = "Thread2";
	targ1.str = "|-|-|-|";
	targ1.num = 2;

	targ2.name = "Thread3";
	targ2.str = "|-|-|";
	targ2.num = 3;

	targ3.name = "Thread4";
	targ3.str = "|-|";
	targ3.num = 4;

	if (pthread_create(&thread1, NULL, &any_func, &targ) != 0) {
		fprintf(stderr, "Error (thread1)\n");
		return 1;
	}

	if (pthread_create(&thread2, NULL, &any_func, &targ1) != 0) {
		fprintf(stderr, "Error (thread2)\n");
		return 1;
	}

	if (pthread_create(&thread3, NULL, &any_func, &targ2) != 0) {
		fprintf(stderr, "Error (thread3)\n");
		return 1;
	}

	if (pthread_create(&thread4, NULL, &any_func, &targ3) != 0) {
		fprintf(stderr, "Error (thread4)\n");
		return 1;
	}

	sleep(5);
	return 0;
}
