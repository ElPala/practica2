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
      scanf("%[^\n]%*c",entrada);


      if (strcmp(entrada,"exit")){
        printf("ola" );
        //break;
      }

      else if (entrada == "shutdown"){
        //kill
      }

      else if (entrada == "./EXEC"){
      char *args[]={"./EXEC",NULL};
      execv(args[0],args);
      }
    }//end while

      printf("Ending-----");

    return 0;
}
