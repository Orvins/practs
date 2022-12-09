#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include "function.h"



int main (int argc, char **argv) {
	int opt;
	if(argc == 1) {
		all();
		return 0;
	}
	while((opt = getopt(argc, argv, "abcdefgh")) != -1) {
		switch(opt) {
			case 'h' : {
				help();
				break;
			}
			case 'a' : {
				printf("  Current process ID: %d\n", getpid());
				break;
			}
			case 'b' : {
				printf("  Current process PID: %d\n", getppid());
				break;
			}
			case 'c' : {
				printf("  ID of group, which executes process: %d\n", getpgrp());
				break;
			}
			case 'd' : {
				printf("  Current process UID: %d\n", (int) getuid());
				break;
			}
			case 'e' : {
				printf("  Current process eUID: %d\n", (int) geteuid());
				break;
			}
			case 'f' : {
				printf("  Current process GID: %d\n", (int) getgid());
				break;
			}
			case 'g' : {
				printf("  eGID: %d\n", getegid());
				break;
			}
			case '?' : {
				printf("  \nUnknown option!\n");
                break;
			}
			default : {
				printf("  \nUnknown option!\n");
                return 0;
			}
		}
	}
	return 0;
}
