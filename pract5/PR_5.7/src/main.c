#include <stdio.h>
#include <stdlib.h>

int clearenv(void);

extern char ** environ;

int main (int argc, char* argv[]) {
	int i;
	if (argc < 2) {
		clearenv();
		printf ("Environment removed!!!\n");
		return 0;
	}

	unsetenv(argv[1]);

	for (i = 0; environ[i] != NULL; i++) {
		printf ("%s\n", environ[i]);
	}

	return 0;
}
