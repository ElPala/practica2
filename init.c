
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
#define NPROCS 6

int main(int argc, char const *argv[]) {
  int i;
  pid_t p;
	//int status;
  char cmd[80];

  for ( i = 0; i < NPROCS; i++) {
    p=fork();
  	if(p==0){
      execlp("/usr/bin/xterm", "xterm", "-e", "./getty", NULL);
    }
  }
  /*
  for ( i = 0; i < NPROCS; i++) {
    	wait(&status);
  }
  */

	do {
		printf("Shell >");
		scanf("%[^\n]%*c",cmd);
	} while(strcmp(cmd,"shutdown")!=0);

  return 0;
}
