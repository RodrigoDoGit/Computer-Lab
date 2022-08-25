#include <stdio.h>

int main(){
  long c, *cptr;

  c = 1386942110;
  cptr = &c;
  printf("tamanho de um long int: %lu\n", sizeof(c));
  printf("tamanho do endereço de um long int: %lu\n", sizeof(&c));
  printf("tamanho de um apontador para um long int: %lu\n", sizeof(cptr));
  printf("tamanho do conteúdo apontado por um apontador para um long int: %lu\n", sizeof(*cptr));
  printf("Os valores apontados pelos endereços '%p' e '%p' são '%ld' e '%ld'\n", &c, cptr, c, *cptr);
  
  return 0;
}
