#include <stdio.h>
#include <stdlib.h>

#define OVERWRITE	0

int main (int argc, char* argv[]) {
	if (argc < 3) {
		printf ("setenv: Too few arguments\n");
		printf ("Usage: setenv <variable> <value>\n");
		return 0;
	}
	if (setenv (argv[1], argv[2], OVERWRITE) != 0) {
		fprintf (stderr, "setenv: Cannot set '%s'\n", argv[1]);
		return 0;
	}
	printf ("%s=%s\n", argv[1], getenv (argv[1]));
	return 0;
}
