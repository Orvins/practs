#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "function.h"


int main (int argc, char **argv) {
	int opt, h = 0;
	int Special_Mode = 0;
	char *fileName = NULL;
	if(argc == 1) {
		printf("  \nMissing input option!");
		return 0;
	}
	while((opt = getopt(argc, argv, "ho:c")) != -1) {
		switch(opt) {
			case 'h' : {
				h = 1;
				break;
			}
			case 'c' : {
				Special_Mode = 1;
				break;
			}
			case 'o' : {
				fileName = optarg;
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
	if(fileName != NULL || Special_Mode == 1 || h==1) {
	    if (fileName != NULL) {
			printf("\nOutput file: %s\n", fileName);
		}
    	if (Special_Mode) {
			printf("\nSpecial mode of operation!");
		}
    	if (h == 1) {
			help();
			return 0;
		}
	} else {
		printf("No operation\n");
	}
	return 0;
}
