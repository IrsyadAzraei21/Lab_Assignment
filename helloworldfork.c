#include <stdio.h>
#include <sys/types.h>
#include <unistd.h> /*needed for fork() and getpid() */

int main(){
fork();
printf("Hello World \n");

return 0;
}
