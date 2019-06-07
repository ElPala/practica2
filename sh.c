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
        execlp("./getty","getty",NULL );
      }


      if (strcmp(entrada,"shutdown")==0){
        //kill all
        sleep(5);
        printf("pala es gei");
        execlp ("killall", "killall", "-9", "xterm","init", NULL);
      }

      pid_t p;
      p = fork();
      if(p==0){
          printf("pala es gei");
                  execlp(entrada, entrada, NULL);

      }
    }//end while



      printf("Ending-----");

    return 0;
}
