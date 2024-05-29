#include<stdio.h>
/*
Construye un programa que permita ingresar los valores de 2 de los ángulos interiores de un triángulo,
y se emita por pantalla el valor del restante.
*/
int main(){
int angulo1, angulo2, angulo3;
//suma de angulos=180

printf("ingrese el primer angulo \n");
scanf("%d", &angulo1);

printf("ingrese el segundo angulo \n");
scanf("%d", &angulo2);

angulo3= 180-(angulo1+angulo2);

printf("el valor del tercer angulo es %d \n",angulo3);
return 0;
}
