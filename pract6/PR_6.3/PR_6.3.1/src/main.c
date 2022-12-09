#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <wait.h>
#include <sys/types.h>


int main (int argc, char **argv) {
	int local = 0;
    pid_t pid[2];
    pid[0] = fork();
    if (pid[0] == 0) {
        local++;
        printf("| Local variable = %d | Address = %p | Parent PID = %d | Own PID = %d |\n", local, &local, getppid(), getpid());
        pid_t pidd[2];
        pidd[0] = fork();
        if (pidd[0] == 0) {
            local++;
            printf("| Local variable = %d | Address = %p | Parent PID = %d | Own PID = %d |\n", local, &local, getppid(), getpid());
        } else if (pidd[0] > 0) {
            pidd[1] = fork();
            if (pidd[1] == 0) {
                local++;
                printf("\n| Local variable = %d | Address = %p | Parent PID = %d | Own PID = %d |\n", local, &local, getppid(), getpid());
            } else if (pidd[1] > 0) {
                printf("\n| Second Main IDs1 = %d | IDs2 = %d |\n", pidd[0], pidd[1]);
                wait(NULL);
            }
        }
    } else if (pid[0] > 0) {
        pid[1] = fork();
        if (pid[1] == 0) {
            local++;
            printf("| Local variable = %d | Address = %p | Parent PID = %d | Own PID = %d |\n", local, &local, getppid(), getpid());
            pid_t pidd[2];
            pidd[0] = fork();
            if (pidd[0] == 0) {
                local++;
                printf("| Local variable = %d | Address = %p | Parent PID = %d | Own PID = %d |\n", local, &local, getppid(), getpid());
            } else if (pidd[0] > 0) {
                pidd[1] = fork();
                if (pidd[1] == 0) {
                    local++;
                    printf("\n| Local variable = %d | Address = %p | Parent PID = %d | Own PID = %d |\n", local, &local, getppid(), getpid());
                }  else if (pidd[1] > 0) {
                    printf("\n| Second Main IDs1 = %d | IDs2 = %d| \n", pidd[0], pidd[1]);
                }
            }
        } else if (pid[1] > 0)  {
            printf("\n| Main ID1 = %d, ID2 = %d |\n", pid[0], pid[1]);
            wait(NULL);
        }
    }
	return 0;
}
