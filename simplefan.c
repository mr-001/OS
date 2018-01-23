#include<stdio.h> //simpleFan.c
#include<unistd.h>
#include<stdlib.h>
int main(int argc, char *argv[]) {
pid_t childpid = 0;
int i, n;
/*check for valid number of command line arguments*/
if(argc != 2){
fprintf(stderr, "Usage %s processes\n", argv[0]);
return 1;
}
n = atoi(argv[1]);
for(i=1;i<n;i++)
if((childpid = fork()) ==-1)
break;
fprintf(stderr," n : %d : i: %d process ID: %ld parent ID: %ldchild ID: %ld \n",n,i,(long)getpid(),(long)getppid(),(long)childpid);
return 0;
}