#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <sys/types.h>
#define SEC 5



int main (int argc, char **argv) {
	pid_t pid;
    pid = fork();
	int count1 = 0, count2 = 0;
	time(NULL);
	clock_t begin = clock();
	clock_t end;
	double time;
	while (1) {
        end = clock();
        time = (double)(end - begin) / CLOCKS_PER_SEC;
        if (time >= SEC)
            break;
        if (pid == 0) {
            count1++;
        } else if (pid > 0) {
            count2++;
        } else {
            printf("Error\n");
        }
    }
    printf("  \n|  Parents process: %d | Child process: %d | Time = %d sec  |", count1, count2, (int)time);
	return 0;
}
