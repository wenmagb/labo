/*
Construir un programa que simule la tirada de dados.
El programa debe preguntarle al usuario cu�ntos dados quiere tirar (n�mero entero) y de cu�ntas caras (1-20).
El programa debe emitir el valor de cada dado y la suma por pantalla.
Ejemplo:
��Cu�ntos dados quieres tirar? �
��De cu�ntas caras son los dados? (1-20)�
�Dado 1: 1�
�Dado 2: 4�
�Dado 3: 1�
�Dado 4: 8�
�Dado 5: 4�
�Dado 6: 4�
�La suma de los resultados de los dados es: 22�
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int resultado;
srand(time(NULL)); // inicializar el generador de n�meros aleatorios
resultado = (rand() % AA) + BB;
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int resultado,cantidad, suma;
srand(time(NULL)); // inicializar el generador de n�meros aleatorios

printf("cuantos dados queres tirar? \n");
scanf("%d",&cantidad);

for(int i=1; i<=cantidad;i++){
resultado = (rand() % 20) + 1;
printf("Dado %i :%d \n", i,resultado);

suma+=resultado;
}
printf("la suma es %d \n",suma);

return 0;
}
