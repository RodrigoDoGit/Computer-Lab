#include <stdio.h>

int comparar(char *str1, char *str2){
  while(*str1 != '\0' && *str1 == *str2){
    str1++;
    str2++;
  }

  return (*str1 == *str2);
}

int main(){
  char *s = "CC1006";
  char *t = "CC1006";

  printf("%d\n", comparar(s, t));
  
  return 0;
}
