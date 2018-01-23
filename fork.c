#include<unistd.h>
#include<stdio.h> //simplefork.c
#include<unistd.h>
pid_t fork(void);
int main(void) 
{
int x;
x = 0;
int m=fork();
x = 1;
printf("I am process %ld& my x is %d\n", (long)getpid(), x);
return 0;
}
