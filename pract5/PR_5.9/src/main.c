#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/utsname.h>

struct utsname PC_Info;


int main (int argc, char* argv[]) {
	uname(&PC_Info);
	char Networrk_name[10];
	gethostname(Networrk_name, 10);
	printf("\n __");
	printf("\n|  \tPC Information");
	printf("\n|");
	printf("\n|  Operating system name:            %s", PC_Info.sysname);
	printf("\n|  Computer name:                    %s", PC_Info.nodename);
	printf("\n|  System issue (release) number:    %s", PC_Info.release);
	printf("\n|  System version number:            %s", PC_Info.version);
	printf("\n|  Hardware type:                    %s", PC_Info.machine);
	printf("\n|  Network name:                     %s", Networrk_name);
	printf("\n|  Unique identificator:             %d", gethostid());
	printf("\n --");
	return 0;
}
