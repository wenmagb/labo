#include<stdio.h>
/* contruye un programa que dados el costo de 1kg de determinado producto y la cantidad comprada, emita el valor total a pagar
valor total= cantidad*kilo
*/

int main() {
int costo,cantidad,total;
printf("costo de los kilos que compraste \n");
scanf("%d", &costo);
printf("cantidad que compraste \n");
scanf("%d", &cantidad);
total= costo * cantidad;
printf("valor total es %d \n", total);
return 0;
}
