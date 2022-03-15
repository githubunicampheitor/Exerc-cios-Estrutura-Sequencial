#include <stdio.h>

int main(void) {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float atriangulo = (a*c) / 2;
    float circulo = c * 3.14159;
    float atrapezio = ((a + b) / 2) * c;
    float aquadrado = b * b;
    float aretangulo = a*b;

    printf("TRIANGULO: %.3f", atriangulo);
    printf("CIRCULO: %.3f", circulo);
    printf("TRAPEZIO: %.3f", atrapezio);
    printf("QUADRADO: %.3f", aquadrado);
    printf("RETANGULO: %.3f", aretangulo);
    
}