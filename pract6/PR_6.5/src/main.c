#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/utsname.h>
#include <errno.h>
#include "function.h"



int main (int argc, char* argv[]) {
	int status;
    if ((status = my_system("date")) < 0) {
		printf(stderr, "%s\n", "Error while invoking system()");
	}
    printf(stderr, "Exit code: %d\n", status);
    if ((status = my_system("nosuchcommand")) < 0) {
		printf(stderr, "%s\n", "Error while invoking system()");
	}
    printf(stderr, "Exit code: %d\n", status);
    if ((status = my_system("who; exit 44")) < 0) {
		printf(stderr, "%s\n", "Error while invoking system()");
	}
    printf(stderr, "Exit code: %d\n", status);
	return 0;
}
