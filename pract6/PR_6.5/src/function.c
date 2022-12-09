#ifndef FUNCTION_C
#define FUNCTION_C
#include <errno.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/utsname.h>


int my_system(const char *cmd_string)  {
    pid_t pid;
    int status;
    if (cmd_string == NULL) {
		return (1);
	}

    if ((pid = fork()) < 0) {
		status = -1;
	} else if (pid == 0) {
        execl("/bin/sh", "sh", "-c", cmd_string, (char *)0);
        _exit(127);
    } else {
		while (waitpid(pid, &status, 0) < 0) {
			if (errno != EINTR) {
                status = -1;
                break;
            }
		}
	}
    return (status);
}



#endif
