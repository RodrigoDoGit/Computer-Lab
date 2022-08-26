#include <stdio.h>

int contar_espacos(char *str){
  int count = 0;

  while(*str != '\0'){
    if(*str == ' ')
      count++;

    str++;
  }

  return count;
}

int main(){
  char *s = "42, o sentido da vida";

  printf("%d\n", contar_espacos(s));
  
  return 0;
}
