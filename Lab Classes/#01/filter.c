#include <stdio.h>

int filtrar_positivos(int vec[], int size){
  int j = 0;

  for(int i=0; i<size; i++)
    if(vec[i] > 0)
      vec[j++] = vec[i];

  return j;
}

int main(){
  int a[5] = {42, 0, 3, -1, 33};

  printf("%d\n", filtrar_positivos(a, 5));
  
  return 0;
}
