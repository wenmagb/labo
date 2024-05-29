/*
Escribir un programa que lea una cadena de caracteres y le cambie todas las consonantes minúsculas por mayúsculas.
Luego, debe mostrar la cadena resultante por pantalla.
No se puede utilizar la biblioteca String.
Ejemplo de entrada:
"ESTA es una ORACIÓN de prueba"
Ejemplo de salida:
"ESTA eS uNa ORACIÓN De PRueBa"
*/
#include<stdio.h>
int main(){
    char cadena[100];

    printf("ingrese una cadena de caracteres \n");
    gets(cadena);

    for(int i=0 ; cadena[i]!='\0';i++){

        if(cadena[i]!='a' && cadena[i]!='e' && cadena[i]!='i' && cadena[i]!='o' && cadena[i]!='u' && cadena[i]!='A' && cadena[i]!='E' && cadena[i]!='I' && cadena[i]!='O' && cadena[i]!='U'){
                //convertir a mayus
                if(cadena[i]>=97 && cadena [i]<=122){
                    cadena[i]=cadena[i]-32;
                }
                /* si quiero convertir tambien a minus
               else if(cadena[i]>=65 && cadena [i]<=90){
                    cadena[i]=cadena[i]+32;
        }
        */
    }
}
printf("%s",cadena);
  return 0;
}
