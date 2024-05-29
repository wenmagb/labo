#include<stdio.h>
/*
Construye un programa que dados el costo de 1 kg de determinado producto y la cantidad comprada,
emita el valor del total a pagar.
*/
int main(){

float costo, kilo, total;

printf("Cuantos kilos compraste? \n");
scanf("%f", &kilo);

printf("Cuantos costaron esos kilos que compraste? \n");
scanf("%f", &costo);

total= costo*kilo;

printf("El total es de %.2f \n",total);
return 0;

}

