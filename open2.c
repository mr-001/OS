#include<stdio.h>
#include <fcntl.h>
 
/* Not technically required, but needed on some UNIX distributions */
#include <sys/types.h>
#include <sys/stat.h>
int main(int argc, char *argv[])
{        
	   int fd1,fd2;
        fd1 = open(argv[1],O_RDONLY);
         if(fd1 == -1){
                printf("Error opening file \n");
                return 0;
           }
         printf("file opened successfully\n");
         printf("fd1=%d\n",fd1);

return 0;
}
