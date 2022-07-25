#include <stdio.h>

int contar_maiores(int vec[], int size, int val){
  int count = 0;

  for(int i=0; i<size; i++)
    if(vec[i] > val)
      count++;

  return count;
}

int main(){
  int vetor[7] = {1,9,5,15,23,42,86};
  int contador = contar_maiores(vetor, 7, 9);
  printf("%d\n", contador);
  
  return 0;
}
