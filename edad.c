#include<stdio.h>

/* contruye programa que te preunte la edad y te la devuelva en dias
e= edad
d= dias
codigo errata
int main () {
int edad;
int dias = (edad * 365);
printf("cual es tu edad? \n");
scanf("%d", &edad);
printf("tu edad en por dia es %d \n", dias);
return 0;
}
*/

int main () {

int edad, dias;

printf("cuantos años tienes? \n");
scanf("%d", &edad);

dias= (edad * 365);

printf("tu edad por dias es de %d \n", dias);
return 0;

}

