#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "function.h"

int credits = 5000;
int pull = 300;
int dp = 999999;


int a, b, c;


int main (int argc, char* argv[]) {
	srand(time(NULL));
	while (1) {
		int menubar;
		printf("\n1 - Play\n");
    	printf("2 - Check balance.\n");
    	printf("3 - Possible win.\n");
    	printf("0 - Exit.\n");
    	scanf("%d", &menubar);
    	switch(menubar) {
    		case 0 : {
    			printf("\nEnd\n");
    			return 0;
				break;
			}
    		case 1 : {
    			if (credits < 300) {
    				balance (credits);
    				return 0;
    			}
    			printf("\n________________________________\n");
    			//printf("\n\tLet's go!\n");
    			credits -= 300;
    			a = rand() % 8;
    			b = rand() % 8;
    			c = rand() % 8;
    			printf("\n\t-------------");
    			printf("\n\t| %d | %d | %d |\n", a, b, c);
    			printf("\t-------------\n");
    			credits += combinations(a, b, c, pull, dp);
    			balance (credits);
    			if (a == 7 && b == 7 && c == 7) {
					return 0;
				}
				printf("________________________________\n");
				break;
			}
			case 2 : {
				balance (credits);
				break;
			}
			case 3 : {
				possible_win ();
				break;
			}
			default: printf("\tError\n\n");
		}
    	continue;
	}
    return 0;
}
