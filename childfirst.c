#include <stdio.h>
#include <sys/wait.h> /* contains prototype forwait*/
#include <stdlib.h>
#include <unistd.h>
int main(void)
{
int pid,p;
int status;
printf("Hello World!\n");
pid = fork( );
if (pid == -1) /* check for error in fork */
{
perror("bad fork");
exit(1);
}
if (pid == 0)
printf("I am the child process.\n");
else
{
p=wait(&status); /* parent waits for child status pointer passed */
printf("p=%d,status=%d\n",p,status);
printf("I am the parent process.\n");
}
}
