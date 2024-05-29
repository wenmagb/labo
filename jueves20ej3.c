/*
Escribir un programa que lea una cadena de caracteres (máximo 100 caracteres)
y reemplace todas las apariciones de una letra especificada por el usuario con otra letra especificada por el usuario.

El programa debe solicitar al usuario la letra a buscar y la letra con la que se debe reemplazar,
y luego mostrar la cadena resultante por pantalla.
No se puede utilizar la biblioteca String.

Ejemplo de entrada:
“Ingrese una cadena de caracteres:”
Esta es una oración de prueba
“Ingrese la letra que desea buscar:”
a
“Ingrese la letra con la que se debe reemplazar:”
J
“La cadena resultante es: EstJ es unJ orJción de pruebJ”
*/
#include<stdio.h>

int main(){
    char cadena[100], buscar, reemplazar;

    printf("ingrese una cadena de caracteres \n");
    gets(cadena);

    // printf("la cadena ingresada es: %s \n",cadena);

    printf("ingrese la letra que desee buscar \n");
    fflush(stdin);
    scanf("%c", &buscar);

    printf("ingrese la letra que desea reemplazar \n");
    fflush(stdin);
    scanf("%c", &reemplazar);



    for(int i=0; cadena[i]!='\0'; i++){
            printf("%c \n",cadena[i]);
            if(cadena[i]==buscar){
                cadena[i]=reemplazar;

            }
    }
    printf("la cadena resultante es: %s \n",cadena);


}
