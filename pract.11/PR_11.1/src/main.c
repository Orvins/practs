#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>
#include <signal.h>



static void signal_handler(int signo) {
	if (signo == SIGINT)
		printf("SIGINT captured!\n");
	else if (signo == SIGTERM)
		printf("SIGTERM captured!\n");
	else {
		fprintf(stderr, "Unexpected signal!\n");
		exit(EXIT_FAILURE);
	}
	exit(EXIT_SUCCESS);
}


int main (void) {
	if (signal(SIGINT, signal_handler) == SIG_ERR) {
		fprintf(stderr, "Error SIGINT!\n");
		exit(EXIT_FAILURE);
	}

	if (signal(SIGTERM, signal_handler) == SIG_ERR) {
		fprintf(stderr, "Error SIGTERM!\n");
		exit(EXIT_FAILURE);
	}

	if (signal(SIGPROF, SIG_DFL) == SIG_ERR) {
		fprintf(stderr, "Error SIGPROF!\n");
		exit(EXIT_FAILURE);
	}

	if (signal(SIGHUP, SIG_IGN) == SIG_ERR) {
		fprintf(stderr, "Erorr SlGHUP!\n");
		exit(EXIT_FAILURE);
	}
	for (;;) {
		raise(SIGTERM);
		pause();
	}
	return 0;
}
