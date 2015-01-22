/* Includes */
#include <unistd.h> /* Symbolic Constants */
#include <sys/types.h> /* Primitive System Data Types */
#include <errno.h> /* Errors */
#include <stdio.h> /* Input/Output */
#include <stdlib.h> /* General Utilities */
#include <foo.h> /*user made library function*/
#include <bar.h> /*user made library function*/

int main(){

pid_t childpid; 							/* variable to store the child's pid */
									/* only 1 int variable is needed because each process would have its own instance of the variable here, 2 int variables are used for clarity */

/* now create new process */
childpid = fork();

if (childpid >= 0) 							/* fork succeeded */
	{
		if (childpid == 0) /* fork() returns 0 to the child process */
			{
				printf("CHILD: I am the child process!\n");
				printf("CHILD: Here's my PID: %d\n", getpid());
				printf("CHILD: My parent's PID is: %d\n", getppid());
				foo();					/*User Library call*/
				bar();
			}
		else							/* fork() returns new pid to the parent process */
			{
				printf("PARENT: I am the parent process!\n");
				printf("PARENT: Here's my PID: %d\n", getpid());
				foo();					/*User Library call*/
				bar();
			}
}
else /* fork returns -1 on failure */
	{
		perror("fork"); /* display error message */
		exit(0);
	}
	
return 1;

}
