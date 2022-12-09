#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function.h"


int main (int argc, char* argv[]) {
	int a, b, c;
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = atoi(argv[3]);
	print_equation(a, b, c);
	discriminant(a, b, c);
	return 0;
}
