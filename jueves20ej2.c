/*
Escribir un programa que simule un juego de dados con apuestas.
El programa debe pedir al usuario que ingrese una cantidad de dinero para apostar y luego tirar dos dados de 6 caras.
Si la suma de los dados es 6, 7 o 8 el jugador gana y duplica su apuesta.
Si la suma es 2 o 12, el jugador pierde toda su apuesta.
En cualquier caso, el juego pierde la mitad de su apuesta.
El jugador puede elegir apostar nuevamente introduciendo el carácter ‘S’ o retirarse con sus ganancias introduciendo cualquier otro carácter.
Ejemplo:
“¿Cuánto dinero quiere apostar? “
100
“Dados:  4 y 3 los dados suman 7“
“¡Usted ganó!! duplica su apuesta“
“Su poso acumulado es de $200, ¿Quiere apostar nuevamente? (S/N)
“Dados:  3 y 2 los dados suman 5“
“¡Usted perdió!! pierde la mitad de su apuesta“
“Su poso acumulado es de $100, ¿Quiere apostar nuevamente? (S/N)”
“Dados:  6 y 3 los dados suman 9“
“¡Usted perdió!! pierde la mitad de su apuesta“
“Su poso acumulado es de $50, ¿Quiere apostar nuevamente? (S/N)”
“Tome sus $50. Vuelva pronto!!”
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int dado1,dado2;
srand(time(NULL)); // inicializar el generador de números aleatorios
dado1 = (rand() % 6) + 1; // generar un número aleatorio entre 1 y 6
dado2 = (rand() % 6) + 1; // generar un número aleatorio entre 1 y 6
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    float dinero, ganancia,acumulado;
    char opcion;
     int dado1=0,dado2=0;
 printf("Ingresa la cantidad de dinero que queres apostar \n");
    scanf("%f",&dinero);
do{

srand(time(NULL)); // inicializar el generador de números aleatorios
dado1 = (rand() % 6) + 1; // generar un número aleatorio entre 1 y 6
dado2 = (rand() % 6) + 1; // generar un número aleatorio entre 1 y 6

    if(dado1+dado2==6 || dado1+dado2==7 || dado1+dado2==8){
        ganancia=dinero*2;
        printf("ganaste: %.2f \n",ganancia);
    }
    else if(dado1+dado2==2 || dado1+dado2==12){
        ganancia=0;
        acumulado=0;
        printf("perdiste todo: %.2f \n",ganancia);
    }
    else{
        ganancia= dinero/2;
        printf("perdiste la mitad de tu apuesta y solo obtuviste: %.2f \n",ganancia);
    }
    acumulado += ganancia;

    printf("tenes %.2f queres apostar denuevo? pone s para continuar, u otro caracter para salir \n",acumulado);
    scanf(" %c",&opcion);
    }
    while(opcion=='s' || opcion=='S');
    printf("Toma tu plata: %.2f \n",acumulado);
}



