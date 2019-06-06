#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char const *argv[]) {

  char user[100];
  char psw[100];
  char aux[100];
  char aux2[100];
  FILE * passwd;
  int bool = 1;
  int len=0;
  const char str[] = ":";
  printf("%s\n", str);
  passwd = fopen("passwd.txt", "r");
  if(passwd==NULL){
    return 0;
  }
  while (1) {
      do {
    		printf("User:");
    		scanf("%[^\n]%*c",user);
        while(fgets(aux,100,passwd))
        {
          printf("%s\n", aux);
          len = strcspn(aux, str);
          strcpy(aux2,"");
          printf("%s\n", aux2);
          strncpy ( aux2, aux, len);
          printf("%s\n", aux2);
          if(strcmp(user, aux2)==0){
              bool=0;
              printf("holaaa\n", aux2);
              break;
          }
        }
    	} while(bool);
      printf("user correct\n");
      do {
    		printf("psw:");
    		scanf("%[^\n]%*c",psw);
        //buscar en el archivo
    	} while(strcmp(psw,"nena1")!=0);
      printf("password correct\n");
  }

  return 0;
}
