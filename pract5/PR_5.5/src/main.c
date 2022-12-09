#include <stdio.h>
#include <stdlib.h>

extern char ** environ;

int main (int argc, char* argv[]) {
	if (argc < 2) {
		char * var1 = getenv (argv[0]);
		printf ("'%s=%s' found\n", argv[0], var1);
		return 0;
	}
	char * var = getenv (argv[1]);
	if (var == NULL) {
		printf ("'%s' not found\n", argv[1]);
		exit (0);
	}
	printf ("'%s=%s' found\n", argv[1], var);
	return 0;
}
