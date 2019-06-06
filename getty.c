#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char user[100];
  char psw[100];
  while (1) {
      do {
    		printf("User:");
    		scanf("%[^\n]%*c",user);
        //buscar en el archivo
    	} while(strcmp(user,"nena")!=0);
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
