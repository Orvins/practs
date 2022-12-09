#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <sys/types.h>
#define SEC 5


int main (int argc, char **argv) {
    pid_t result;
    extern char **environ;
    char *sleep_args[] = { "sleep", "5", NULL };

    result = fork ();
    if (result == -1) {

        fprintf (stderr, "Fork Error\n"); exit(EXIT_FAILURE);
    }

    if (result == 0) {
        execve("/bin/sleep", sleep_args, environ);
        fprintf (stderr, "Execve Error\n");
        exit(EXIT_FAILURE);
    } else {
        fprintf(stderr, "Parent process. PlD=%d\n", getpid());
    }

    return EXIT_SUCCESS;
}

