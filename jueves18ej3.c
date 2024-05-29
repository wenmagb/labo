#include<stdio.h>
/*
Construir un programa que lea una cadena de caracteres (máximo 100 caracteres)
y cuente cuántas veces aparece cada vocal en la cadena.
El programa debe mostrar el resultado por pantalla.
(Tener en cuenta tanto mayúsculas como minúsculas por igual)
Ejemplo de entrada:
“Ingrese una cadena de caracteres:”
HOLA mundo!
“Cantidad de vocales:”
”A: 1”
”E: 0”
”I: 0”
”O: 2”
”U: 1”
*/
int main(){
    char cadena[100];
    int contador_a=0, contador_e=0, contador_i=0, contador_o=0, contador_u=0;
printf("ingrese una cadena de caracteres \n");
gets(cadena);

for(int i=0; cadena[i]!='\0'; i++){
    if(cadena[i]=='a' || cadena[i]=='A'){
        contador_a++;
        }
    if(cadena[i]=='e' || cadena[i]=='E'){
        contador_e++;
        }
    if(cadena[i]=='i' || cadena[i]=='I'){
        contador_i++;
        }
    if(cadena[i]=='o' || cadena[i]=='O'){
        contador_o++;
        }
    if(cadena[i]=='u' || cadena[i]=='U'){
        contador_u++;
        }
    }
printf("A= %d \n",contador_a);
printf("E= %d \n",contador_e);
printf("I= %d \n",contador_i);
printf("O= %d \n",contador_o);
printf("U= %d \n",contador_u);
}

