/*
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char cmd[80];

	do {
		printf("Shell >");
		scanf("%[^\n]%*c",cmd);
		system(cmd);
	} while(strcmp(cmd,"exit")!=0);
	return 0;
}
*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <string.h>


int main()
{
    char cmd[80];
    char entrada[100];

    while(1){
      printf("Shell >");
      fflush(stdin);
      scanf("%[^\n]%*c",entrada);


      if (strcmp(entrada,"exit")==0){
        printf("ola\n" );
        break;
      }

    //  else   if (strcmp(entrada,"./exec.c")==0){
      //    execlp("EXEC.c",NULL);
        //}


      else if (entrada == "shutdown"){
        //kill
      }

      pid_t p;
      p = fork();
      if(p==0)
          execlp(entrada, entrada, NULL);




    }//end while

      printf("Ending-----");

    return 0;
}
