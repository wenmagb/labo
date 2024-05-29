#include<stdio.h>
/*
Construye un programa que pregunte los años que tienes y emita como respuesta el número de días (sólo en años).
*/
int main(){
int dias, anios;

printf("ingresa tu edad \n");
scanf("%d", &anios);

dias=anios*365;

printf("el equivalente en dias es %d \n", dias);
return 0;

}
