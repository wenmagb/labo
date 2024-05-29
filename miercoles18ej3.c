/*
Escribir un programa que lea una cadena de caracteres y le cambie todas las consonantes
(tanto mayúsculas como minúsculas) por un espacio (' '). Luego, debe mostrar la cadena resultante por pantalla.
No se puede utilizar la biblioteca String.
Ejemplo de entrada:
"Esta es una oracion de prueba"
Ejemplo de salida:
"E  a e  u a o a io   e   ue a"
*/
#include<stdio.h>

int main(){
    char cadena[100], espacio=' ';

    printf("ingrese una cadena de caracteres \n");
    gets(cadena);

    for(int i=0; cadena[i]!='\0'; i++){
        if(cadena[i]!='a' && cadena[i]!='A' && cadena[i]!= 'e' && cadena[i]!='E' && cadena[i]!='i' && cadena[i]!='I' && cadena[i]!='o' && cadena[i]!='O' && cadena[i]!='u' && cadena[i]!='U'){
            cadena[i]=espacio;
        }
    }

    printf("%s",cadena);
return 0;
}
