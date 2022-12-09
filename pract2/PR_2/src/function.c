#ifndef FUNCTION_C
#define FUNCTION_C


//Check balance
int balance (int credits) {
	printf("\n\t====================");
	printf("\n\t|| Credits = %d ||\n", credits);
	printf("\t====================\n");
}

//Combinations
int combinations(int a, int b, int c, int pull, int dp) {

	int n2 = 200;
	int n1 = 100;

	if (a == 7 && b == 7 && c == 7) {
		printf("\n\t$$$ Mega Cuuuuuuushhhhh!!! $$$\n");
		return dp;
	} else  if (a == 6 && b == 6 && c == 6) {
		printf("\n\t$ You lost! $\n");
	} else if (a == 0 && b == 0 &&  c == 0) {
		printf("\n\t$ You win %d $\n", pull);
		return pull;
	} else if (a == 1 && b == 1 && c == 1) {
		printf("\n\t$ You up 2X cushh!  %d $\n", pull * 3);
		return pull * 3;
	} else if (a == 2 && b == 2 && c == 2) {
		printf("\n\t$ You up 5X cushh!  %d $\n", pull * 5);
		return pull * 5;
	} else if (a == 3 && b == 3 && c == 3) {
		printf("\n\t$ You up 10X cushh!  %d $\n", pull * 10);
		return pull * 10;
	} else if (a == 4 && b == 4 && c == 4) {
		printf("\n\t$ You up 20X cushh!  %d $\n", pull * 20);
		return  pull * 20;
	} else if (a == 5 && b == 5 && c == 5) {
		printf("\n\t$ You up 100X cushh!  %d $\n", pull * 100);
		return pull * 100;
	}  else if (a == b && a != 6) {
		printf("\n\t$ You win %d $\n", n2);
		return 200;
	} else if (a == b && a == 6) {
		printf("\n\t$ You win %d $\n", n1);
		return 100;
	} else if (a == c) {
		printf("\n\t$ You win %d $\n", n1);
		return 100;
	} else if (b == c) {
		printf("\n\t$ You win %d $\n", n1);
		return 100;
	} else if (a != b && b != c && c != a) {
		printf("\n\t$ You win %d $\n", n1);
		return 100;
	}
}


//Possible win
void possible_win () {
	printf("\n\tPrize combinations:");
	printf("\n\t-------------");
	printf("\n\t| X | X | X | - 100$\n");
    printf("\t-------------");

	printf("\n\t-------------");
	printf("\n\t| $ | $ | X | - 200$\n");
    printf("\t-------------");

	printf("\n\t-------------");
	printf("\n\t| 0 | 0 | 0 | - X1\n");
    printf("\t-------------");

	printf("\n\t-------------");
	printf("\n\t| 1 | 1 | 1 | - X3\n");
    printf("\t-------------");

	printf("\n\t-------------");
	printf("\n\t| 2 | 2 | 2 | - X5\n");
    printf("\t-------------");

	printf("\n\t-------------");
	printf("\n\t| 3 | 3 | 3 | - X10\n");
    printf("\t-------------");

	printf("\n\t-------------");
	printf("\n\t| 4 | 4 | 4 | - X20\n");
    printf("\t-------------");

	printf("\n\t-------------");
	printf("\n\t| 5 | 5 | 5 | - X100\n");
    printf("\t-------------");

	printf("\n\t-------------");
	printf("\n\t| 6 | 6 | 6 | - Loos!\n");
    printf("\t-------------");

	printf("\n\t-------------");
	printf("\n\t| 7 | 7 | 7 | - Jack Pot!\n");
    printf("\t-------------\n\n");
}

#endif
