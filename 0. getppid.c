#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	pid_t parentId;
	pid_t currentProcessId;

	currentProcessId = getpid();
	parentId = getppid();

	printf("Current Procces ID is %u\n", currentProcessId);
	printf("Parent ID is %u\n", parentId);

	return(0);
}

/*
When we run this program several times within the same shell, it prints the
same value each time. This is because each time we runt the
program, it creates a new process. The new process inherits the environment,
including the parent process ID, from the shell process.

Usnig echo $$ in the shell, it also prints the PID of the
current shell process. runnig echo $$ multiple times within the same shell
session, it will  print the same value. This is because $$ is a special
variable in many Unix-like shells, including Bash, which represents the PID of
the current shell process.
*/

