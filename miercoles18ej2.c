/*
Construir un programa que simule la tirada de cubiletes de 6 dados de 6 caras.
El programa debe preguntarle al usuario cuántos cubiletes quiere tirar (número entero).
El programa debe emitir el valor de los dados de cada cubilete y la suma por pantalla.
Ejemplo:
“¿Cuántos  cubiletes quieres tirar? “
“Cubiletes 1 - Dados: 1, 3, 4, 2, 3, 6“
“Cubiletes 1 - Dados: 5, 6, 5, 2, 1, 2“
“Cubiletes 1 - Dados: 4, 2, 6, 4, 5, 2“
“La suma total es: 63“
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int resultado;
srand(time(NULL)); // inicializar el generador de números aleatorios
resultado = (rand() % AA ) + BB ;
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

    int resultado, cantidad,suma=0;

    srand(time(NULL)); // inicializar el generador de números aleatorios
    printf("cuantos cubiletes quiere tirar? \n");
    scanf("%d",&cantidad);

    for(int j=0; j<cantidad; j++){
        printf("\n cubilete %d - dados:",(j+1));
        for(int i=0; i<6; i++){
        resultado = (rand() % 6 ) + 1 ;
        suma+=resultado;
        printf(" %d",resultado);
        }

    }
    printf("\n La suma total es: %d",suma);

    return 0;
}
