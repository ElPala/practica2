#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char const *argv[]) {

  char user[100];
  char psw[100];
  char aux[100];
  char *aux2;
  FILE * passwd;
  int bool = 1;
  int len=0;
  const char str[] = ":";

  while (1) {
      do {
      		printf("User:");
          fflush(stdin);

      		scanf("%[^\n]%*c",user);
          passwd = fopen("passwd.txt", "r");
          if(passwd==NULL){
            return 0;
          }else

          strcpy(aux,"");


          while(fgets(aux,100,passwd))
          {


            len = strcspn(aux, str);
            aux2=memchr(aux,':',len+1);
            *(aux2++);
            printf("%d\n", strlen(aux));
            aux[strlen(aux)-1]='\0';
            //strcpy(aux2,"");
            //strncpy ( aux, aux, len);
            aux[len]='\0';

            if(strcmp(user, aux)==0){
                bool=0;
                printf("Usuario correcto, hola %s\n",aux);
                break;
            }
          }
          fclose(passwd);
    	} while(bool);
      bool=1;
  		printf("psw:");
      fflush(stdin);
      scanf("%[^\n]%*c",psw);
      printf("%s\n", aux2);
      printf("%s\n", psw);
    	if(strcmp(psw,aux2)==0){
        printf("password correcta\n");
      }else
        printf("password incorrecta\n");

  }

  return 0;
}
