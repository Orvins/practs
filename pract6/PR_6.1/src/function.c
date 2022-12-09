#ifndef FUNCTION_C
#define FUNCTION_C
#include <math.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>


void help() {
	printf("  \n ===================================================");
	printf("  \n|  -h - Help on using the program                   |");
	printf("  \n|  -a - Prints current process ID                   |");
	printf("  \n|  -b - Prints current process PID                  |");
	printf("  \n|  -c - Prints ID of group, which executes process  |");
	printf("  \n|  -d - Prints current process UID                  |");
	printf("  \n|  -e - Prints current process eUID                 |");
	printf("  \n|  -f - Prints current process GID                  |");
	printf("  \n|  -g - Prints eGID                                 |");
	printf("  \n ===================================================");

}


void all() {
	printf("  \n ===========================================");
	printf("  \n|  Current process ID: %d                   |", getpid());
	printf("  \n|  Current process PID: %d                  |", getppid());
	printf("  \n|  ID of group, which executes process: %d  |", getpgrp());
	printf("  \n|  Current process UID: %d                  |", (int) getuid());
	printf("  \n|  Current process eUID: %d                 |", (int) geteuid());
	printf("  \n|  Current process GID: %d                  |", (int) getgid());
	printf("  \n|  eGID: %d                                 |", getegid());
	printf("  \n ===========================================");
}

#endif
