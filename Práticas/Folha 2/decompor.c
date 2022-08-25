#include <stdio.h>

void decompor(int total_seg, int *horas, int *mins, int *segs){
  *horas = total_seg/3600;
  total_seg %= 3600;
  *mins = total_seg/60;
  total_seg %= 60;
  *segs = total_seg;
}

int main(){
  int h, m, s, total = 4242;

  decompor(total, &h, &m, &s);
  printf("%d segundo(s) = %d hora(s), %d minuto(s) e %d segundo(s)\n", total, h, m, s);
  
  return 0;
}
