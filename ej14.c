#include<stdio.h>
/*
Desarrolla un algoritmo que permita, dados ciertos centímetros como entrada de tipo flotante,
emitir por pantalla su equivalencia en pies (enteros) y en pulgadas (flotante, con 1 decimal).
*/

int main(){

float centimetro, pulgadas;
int pies;

printf("Ingrese centimetros \n");
scanf("%f", &centimetro);

pulgadas= centimetro/2.54;
pies= centimetro/30.48;

printf("El valor en pulgadas es %.1f \n", pulgadas);
printf("El valor en pies es %d \n", pies);

return 0;
}
