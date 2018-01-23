#include<stdio.h> //badprocessID.c
#include<unistd.h>
int main(void) 
{
pid_t childpid;
pid_t mypid;
mypid = getpid();
childpid = fork();
if(childpid==-1){
printf("Failed to fork");
return 1;
}
if(childpid==0)
printf("I am child %ld, ID = %ld\n",
(long)getpid(),(long)mypid);
else
printf("I am parent %ld, ID = %ld\n",
(long)getpid(),(long)mypid);
return 0;
}
//output :I am parent 15148, ID = 15148
//I am child 22428, ID = 15148