#include <stdio.h>
#include <math.h>

struct Ponto{
  float x;
  float y;
};

typedef struct Ponto PONTO;

float distanciaEuclideana(PONTO p1, PONTO p2);
float distancia_total(PONTO percurso[], int size);
PONTO soma(PONTO p1, PONTO p2);

float distanciaEuclideana(PONTO p1, PONTO p2){
  float pow1 = (p2.x - p1.x) * (p2.x - p1.x);
  float pow2 = (p2.y - p1.y) * (p2.y - p1.y);

  return (pow1 + pow2);
}

PONTO soma(PONTO p1, PONTO p2){
  PONTO p3;

  p3.x = p1.x + p2.x;
  p3.y = p1.y + p2.y;

  return p3;
}

float distancia_total(PONTO percurso[], int size){
  float sub1 = percurso[0].x, sub2 = percurso[0].y;
  
  for(int i=1; i<size; i++){
    sub1 -= percurso[i].x;
    sub2 -= percurso[i].y;
  }

  float pow1 = sub1 * sub1;
  float pow2 = sub2 * sub2;

  return (pow1 + pow2);
}

int main(){
  PONTO p1, p2, p3;
  PONTO caminho[] = {{0,0}, {0,1}, {1,1}, {4,5}};
  int size = 4;
  float dist;

  scanf("%f %f", &p1.x, &p1.y); // ler coordenada x e y de um ponto para p1
  scanf("%f %f", &p2.x, &p2.y); // ler coordenada x e y de um ponto para p2
  dist = distanciaEuclideana(p1,p2);
  p3 = soma(p1,p2);
  printf ("distancia euclideana entre os pontos (%f,%f) e (%f,%f) = %f\n", p1.x, p1.y, p2.x, p2.y, dist); // imprimir distância euclideana entre os pontos p1 e p2
  printf ("vetor soma dos vetores representados pelos pontos (%f,%f) e (%f,%f) = (%f,%f)\n", p1.x, p1.y, p2.x, p2.y, p3.x, p3.y); // imprimir vector soma dos vectores representados pelos pontos p1 e p2
  dist = distancia_total(caminho, size);
  printf ("distancia euclideana total dos segmentos do percurso = %f\n", dist); // imprimir distância euclideana total dos segmentos do percurso

  return 0;
}

