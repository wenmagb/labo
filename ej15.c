#include<stdio.h>
/*
Construye un programa que pregunte los a�os que tienes y emita como respuesta el n�mero de d�as (s�lo en a�os).
*/
int main(){
int dias, anios;

printf("ingresa tu edad \n");
scanf("%d", &anios);

dias=anios*365;

printf("el equivalente en dias es %d \n", dias);
return 0;

}
