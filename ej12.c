#include<stdio.h>
/*
Desarrolla un algoritmo que permita leer por teclado 2 valores
y emitir por pantalla: la suma de los dos, la resta, producto, división, promedio
y el doble producto del primero menos la mitad del segundo.
*/

int main(){
float valor1, valor2;
float suma, resta, producto, division, promedio, dobleDelProducto;

printf("ingrese el primer valor \n");
scanf("%f", &valor1);
printf("ingrese el segundo valor \n");
scanf("%f", &valor2);

suma= valor1+valor2;
resta=valor1-valor2;
producto=valor1*valor2;
division=valor1/valor2;
promedio=(valor1+valor2)/2;
dobleDelProducto=(valor1*2)-(valor2/2);

printf("La suma del primer valor con el segundo es: %.2f \n", suma);
printf("La resta del primer valor con el segundo es: %.2f \n", resta);
printf("El producto del primer valor con el segundo es: %.2f \n", producto);
printf("La division del primer valor con el segundo es: %.2f \n", division);
printf("El promedio del primer valor con el segundo es: %.2f \n", promedio);
printf("El doble producto del primero menos la mitad del segundo es: %.2f \n", dobleDelProducto);

}
