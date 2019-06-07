#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <string.h>
#include <sys/wait.h>


int main()
{
    char cmd[80];
    char entrada[100];
    int status;
    pid_t p;

    while(1){
      printf("Shell >");
      fflush(stdin);
      //scanf("%[^\n]%*c",entrada);
      fgets(entrada, 100, stdin);
      entrada[strlen(entrada)-1 ]='\0';

      if (strcmp(entrada,"exit")==0){
        execlp("./getty","getty",NULL );
      }


      if (strcmp(entrada,"shutdown")==0){
        //kill all
        execlp ("killall", "killall", "-9", "xterm","init", NULL);
      }

      if (strcmp(entrada,"\n")==0){
        continue;
      }


      p = fork();
      if(p==0){
          execlp(entrada, entrada, NULL);

      }else {
        wait(&status);
      }
    }//end while



      printf("Ending-----");

    return 0;
}
