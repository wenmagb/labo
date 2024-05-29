#include<stdio.h>
/*Construye un programa que permita ingresar las medidas de los lados de un rectángulo;
el mismo debe emitir por pantalla su superficie y su perímetro.
*/
int main(){
float ladoLargo, ladoCorto, superficie, perimetro;

printf("Ingrese el lado largo del rectangulo \n");
scanf("%f", &ladoLargo);

printf("Ingrese el lado corto del rectangulo \n");
scanf("%f", &ladoCorto);

superficie=ladoLargo*ladoCorto;
perimetro=(ladoCorto*2)+(ladoLargo*2);

printf("La superficie es %.2f y el perimetro es %.2f \n",superficie,perimetro);
return 0;
}

