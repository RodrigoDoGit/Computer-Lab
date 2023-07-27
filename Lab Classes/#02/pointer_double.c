#include <stdio.h>

int main(){
  double c, *cptr;

  c = 42.391;
  cptr = &c;
  printf("tamanho de um double: %lu\n", sizeof(c));
  printf("tamanho do endereço de um double: %lu\n", sizeof(&c));
  printf("tamanho de um apontador para um double: %lu\n", sizeof(cptr));
  printf("tamanho do conteúdo apontado por um apontador para um double: %lu\n", sizeof(*cptr));
  printf("Os valores apontados pelos endereços '%p' e '%p' são '%lf' e '%lf'\n", &c, cptr, c, *cptr);
  
  return 0;
}
