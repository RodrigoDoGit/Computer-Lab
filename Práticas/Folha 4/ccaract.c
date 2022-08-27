#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){
  int total = 0;

  /*
   * argc: número de argumentos da linha de comandos (incluindo o nome do
executável)
   *argv[]: vector com os argumentos (cadeias de caracteres) passados na
linha de comandos:
   *argv[0] - corresponde ao nome do executável
   *argv[1] - corresponde ao primeiro argumento
   *...
   *argv[argc-1] - corresponde ao último argumento
   *argv[argc] - tem valor NULL
   */

  for(int i=1; i<argc; i++){
    int len = strlen(argv[i]);

    total += len;
    printf("%s -> %d\n", argv[i], len);
  }

  printf("total = %d\n", total);
  
  return 0;
}
