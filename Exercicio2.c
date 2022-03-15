#include <stdio.h>

int main(void) {
  float raio, area, pi;
  pi = 3.14159;
  
  scanf("%f", &raio);
  area = (pi*raio*raio);
  
  printf("A = %.4f",area);
  return 0;
}