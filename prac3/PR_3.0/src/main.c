#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>
#include "function.h"


int main (int argc, char* argv[]) {
	srand(time(NULL));
	float **ArrayList;
	int n, k = 0;
	while (1) {
		int menubar;
		printf("\n  =================================================================================================\n");
		printf("\t\t\t\t\tMenu\n");
		printf("\n\t1. Create and populate an array.\n");
    	printf("\t2. Running the algorithm.\n");
		printf("\t0. Exit.\n");
		printf("\n  =================================================================================================\n");
		printf("  Your choice: ");
		scanf ("%d", &menubar);
		switch(menubar) {
			case 0 : {
				printf("\n\t\t\t\t\t  ______");
				printf("\n\t\t\t\t\t | Exit |");
				printf("\n\t\t\t\t\t  ------\n");
				free(ArrayList);
				return 0;
			}
			case 1 : {
				if (k == 0) {
					int menubar1;
					printf("\n  How to populate an array?\n");
					printf("  1 - Manual.\n");
					printf("  2 - Fill with random numbers from Min to Max\n");
					printf("  Your choice: ");
					scanf ("  %d", &menubar1);
					switch(menubar1) {
						case 1 : {
							printf("\n  Enter the size of the array:");
							scanf ("%d", &n);
							if (n < 0) {
								printf("  Error\n");
								break;
							}
							ArrayList = memory(n);
							entering_ArrayList(ArrayList, n);
							print_ArrayList(ArrayList, n);
							k++;
							break;
						}
						case 2 : {
							int min, max;
							printf("\n  Enter the size of the array:");
							scanf ("%d", &n);
							if (n < 0) {
								printf("  Error\n");
								break;
							}
							printf("  Enter the minimum value:");
							scanf ("%d", &min);
							printf("  Enter the maximum value:");
							scanf ("%d", &max);
							ArrayList = memory(n);
							entering_ArrayList_random(ArrayList, n, min, max);
							print_ArrayList(ArrayList, n);
							k++;
							break;
						}
						default: printf("  Error\n\n");
					}
				} else {
					printf("\n  Array created!\n");
					break;
				}

				break;
			}
			case 2 : {
				if (k == 1) {
					SSM(ArrayList, n);
					break;
				} else {
					printf("\n  Array not created!\n");
					break;
				}
				break;
			}
			default: printf("  Error\n\n");
		}
		continue;
	}
	return 0;
}
