#include<stdio.h>
/*
Escribir un programa que simule un juego de carreras de caballos con apuestas.
El programa debe pedir al usuario que ingrese una cantidad de dinero para apostar a su caballo
(el usuario no puede elegir a qué caballo apuesta).
Luego generar un resultado aleatorio entre 1 y 6 que indicará en qué posición terminó el caballo.
Si el caballo termina en 1° lugar el jugador cuadruplica su apuesta.
Si el caballo termina en 2° lugar el jugador triplica su apuesta.
Si el caballo termina en 3° lugar el jugador duplica su apuesta.
En cualquier caso, el juego pierde la mitad de su apuesta.
El jugador puede elegir apostar nuevamente introduciendo el carácter ‘S’ o retirarse con sus ganancias introduciendo cualquier otro carácter.
Ejemplo:
“¿Cuánto dinero quiere apostar? “
100
“Resultado de su caballo: 1“
“¡Usted ganó!! cuadruplica su apuesta“
“Su poso acumulado es de $400, ¿Quiere apostar nuevamente? (S/N)
“Resultado de su caballo: 5“
“Usted perdió la mitad de su apuesta“
“Su poso acumulado es de $200, ¿Quiere apostar nuevamente? (S/N)”
“Tome sus $200. Vuelva pronto!!”
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int resultado;
srand(time(NULL)); // inicializar el generador de números aleatorios
resultado = (rand() % 6) + 1; // generar un número aleatorio entre 1 y 6
*/
#include <stdlib.h>
#include <time.h>
int main(){
int resultado;
srand(time(NULL)); // inicializar el generador de números aleatorios
float dinero, ganancia;
char continuar;


printf("Ingrese la cantidad de dinero que desea apostar \n");
scanf("%f", &dinero);

while(1){
        resultado = (rand() % 6) + 1; // generar un número aleatorio entre 1 y 6

if(resultado == 1){
ganancia=dinero*4;
printf("El caballo quedo primero. Tu apuesta se cuadruplica y tienes un tortal de %.2f \n",ganancia);
    }else if (resultado == 2){
    ganancia=dinero*3;
printf("El caballo quedo segundo, ganaste. Tu apuesta se triplica y tienes un tortal de %.2f \n",ganancia);
}else if (resultado == 3){
    ganancia=dinero*2;
printf("El caballo quedo tercero, ganaste. Tu apuesta se duplica y tienes un tortal de %.2f \n",ganancia);
}else {
        ganancia= dinero/2;
    printf("Perdiste la mitad de tu apuesta, ahora tenes %.2f \n",ganancia);
};

printf("Queres apostar otra vez? Presiona s para continuar y cualquier otro caracter para salir \n");
scanf(" %c", &continuar);

if (continuar != 's' && continuar != 'S'){
    printf("Toma tu guita: %.2f \n",ganancia);
    break;
}else{
dinero=ganancia;
};
}
return 0;
}
