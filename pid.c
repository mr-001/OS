#include<stdio.h> 
#include<unistd.h>
#include <fcntl.h>
#include<unistd.h>
pid_t getpid(void);
pid_t getppid(void);
/* Not technically required, but needed on some UNIX distributions */
#include <sys/types.h>
#include <sys/stat.h>
int main(void) 
{
printf("hello world ! \n");
printf("I am process %ld ",(long)getpid());
//printf("My parent is %ld ",(long)getppid());
return 0;

}