#include <stdio.h>

void max_min(int vec[], int size, int *pmax, int *pmin){
  *pmax = vec[0];
  *pmin = vec[0];

  for(int i=1; i<size; i++){
    if(vec[i] < *pmin)
      *pmin = vec[i];

    if(vec[i] > *pmax)
      *pmax = vec[i];
  }
}

int main(){
  int v[5] = {1, -9, 0, 42, 31};
  int max, min;

  max_min(v, 5, &max, &min);
  printf("min = %d, max = %d\n", min, max);

  return 0;
}
