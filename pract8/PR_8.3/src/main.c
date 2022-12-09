#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>
#include <time.h>




void * print(void * arg){
	int t = *(int*) arg;
	pthread_setcancelstate(PTHREAD_CANCEL_DISABLE, NULL);
	int i;
	for (i = 1; i < t*2; i++){
		printf("Child thread. Iteration %d.\n", i);
		sleep(1);
	}
}

int main(int argc, char **argv){
	if (argc == 1){
		printf("Missing argument!\n");
	}else{
		pthread_t thread;
		int a = atoi(argv[1]);
		if (pthread_create(&thread, NULL, &print, &a) != 0) {
				fprintf(stderr, "Error (thread1)\n");
				return 1;
		}
		sleep(atoi(argv[1]));
		pthread_cancel(thread);
		void *result;
		if (!pthread_equal(pthread_self(), thread))
				pthread_join(thread, &result) ;
		if (result == PTHREAD_CANCELED)
			fprintf(stderr, "Canceled\n");
		else fprintf(stderr, "Succesful exit\n");
	}
	return 0;
}
