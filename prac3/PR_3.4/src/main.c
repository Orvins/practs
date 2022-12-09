#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>
#include "function.h"


int main (int argc, char* argv[]) {
	srand(time(NULL));
	int **ArrayList;
	int n, k = 0;
	while (1) {
		int menubar;
		printf("\n  =================================================================================================\n");
		printf("\t\t\t\t\tMenu\n");
		printf("\n\t1. Adding an element to the end of the list - the 'add(item)' method.\n");
    	printf("\t2. Inserting an element into the middle of the list - the 'insert(index, item)' method.\n");
    	printf("\t3. The number of elements in the array - the 'size()' method.\n");
    	printf("\t4. Removing elements by index - 'remove(index)' method.\n");
		printf("\t5. Changing the value of an existing element - the 'set(index, item)' method.\n");
		printf("\t6. Getting the value of the given element - the 'get(index)' method.\n");
		printf("\t7. Filling an array.\n");
		printf("\t8. Displaying array elements.\n");
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
				if (k == 1) {
					int item;
					printf("\n  Enter a new array value: ");
					scanf ("%d", &item);
					ArrayList = overwriting(ArrayList, n);
					add(ArrayList, n, item);
					n++;
					print_ArrayList(ArrayList, n);
					break;
				} else {
					printf("\n  Array not created!\n");
					break;
				}
			}
			case 2 : {
				if (k == 1) {
					int index, item;
					printf("\n  Enter array index: ");
					scanf ("%d", &index);
					index--;
					printf("\n  Enter a new array value: ");
					scanf ("%d", &item);
					ArrayList = overwriting(ArrayList, n);
					insert(ArrayList, n, index, item);
					n++;
					print_ArrayList(ArrayList, n);
					break;
				} else {
					printf("\n  Array not created!\n");
					break;
				}
				break;
			}
			case 3 : {
				if (k == 1) {
					size(n);
					break;
				} else {
					printf("\n  Array not created!\n");
					break;
				}
			}
			case 4 : {
				if (k == 1) {
					int index;
					printf("\n  Enter array index: ");
					scanf ("%d", &index);
					index--;
					ArrayList = overwriting(ArrayList, n);
					rem(ArrayList, n, index);
					n--;
					print_ArrayList(ArrayList, n);
					break;
				} else {
					printf("\n  Array not created!\n");
					break;
				}
				break;
			}
			case 5 : {
				if (k == 1) {
					int index, item;
					printf("\n  Enter array index: ");
					scanf ("%d", &index);
					index--;
					printf("\n  Enter a new array value: ");
					scanf ("%d", &item);
					set(ArrayList, index, item);
					break;
				} else {
					printf("\n  Array not created!\n");
					break;
				}
			}
			case 6 : {
				if (k == 1) {
					int index;
					printf("  Enter array index: ");
					scanf ("%d", &index);
					index--;
					if (index < 0 || index > n) {
						printf("  Error\n");
						break;
					}
					get(ArrayList, index);
					break;
				} else {
					printf("\n  Array not created!\n");
					break;
				}
			}
			case 7 : {
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
							if (size < 0) {
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
			case 8 : {
				if (k == 0) {
					printf("\n  Array not created!\n");
					break;
				} else {
					print_ArrayList(ArrayList, n);
					break;
				}
			}
			default: printf("  Error\n\n");
		}
		continue;
	}
	return 0;
}
