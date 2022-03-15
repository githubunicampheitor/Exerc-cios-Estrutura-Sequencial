#include <stdio.h>

int main(void) {
  int num, horas;
  float sal;
  
  scanf("%d", &num);
  scanf("%d", &horas);
  scanf("%f", &sal);

  sal = (sal*horas);
  
  printf("NUMERO = %d",num);
  printf("\nSALÁRIO = R$ %.2f",sal);
  return 0;
}