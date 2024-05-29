/*
Datos:Un docente de nivel secundario necesita un programa que le ayude a calcular el promedio de las notas de sus alumnos
y la cantidad de aprobados.
Requerimiento:
Construir un programa que permita procesar una cantidad desconocida de alumnos.
Por cada alumno se ingresan 4 notas.
Finalizan los ingresos de este proceso al introducir como número de legajo un 0
Por cada alumno se ingresa:
Número de legajo, un número entero distinto de 0
nota 1, es un número entero, de 1 a 10
nota 2, es un número entero, de 1 a 10
nota 3, es un número entero, de 1 a 10
nota 4, es un número entero, de 1 a 10
Esta función debe emitir, por cada alumno el promedio de sus notas
y si está desaprobado o aprobado (se aprueba con un 6 o más) Ej.:
....
“Ingrese el número de legajo, un número entero distinto de 0”
3847
“Ingrese la nota 1”
6
“Ingrese la nota 2”
7
“Ingrese la nota 3”
5
“Ingrese la nota 4”
8
“El alumno B tiene un promedio de 6.5, el alumno está aprobado.”
“Ingrese el número de legajo, un número entero distinto de 0”
5378
“Ingrese la nota 1”
4
“Ingrese la nota 2”
7
“Ingrese la nota 3”
5
“Ingrese la nota 4”
6
El alumno G tiene un promedio de 4.5, el alumno está desaprobado.
Al finalizar el ingreso de todos los alumnos el programa debe emitir:
El Total de alumnos, la cantidad de aprobados, la cantidad de desaprobados, el promedio menor
y el número de legajo del alumno que tuvo el promedio menor.
(No es necesario contemplar el caso de que haya más de un alumno con el mismo promedio,
 asumir que todos los alumnos tienen distintos promedios)
*/
#include<stdio.h>

int main(){
    int total_alumnos=0, nota1, nota2, nota3, nota4;
    int legajo, legajo_menor, aprobados=0, desaprobados=0;
    float promedio, promedio_menor=10.0;

    printf("ingrese un numero de legajo(distinto de cero) \n");
    scanf("%d", &legajo);

    while(legajo!=0){
        printf("ingrese nota 1 \n");
        scanf("%d",&nota1);
        printf("ingrese nota 2 \n");
        scanf("%d",&nota2);
        printf("ingrese nota 3 \n");
        scanf("%d",&nota3);
        printf("ingrese nota 4 \n");
        scanf("%d",&nota4);

        promedio=(nota1+nota2+nota3+nota4)/4.0;


        if(promedio>=6){
            aprobados++;
            printf("El alumno tiene un %.2f, esta aprobado \n",promedio);
        }else{
            desaprobados++;
            printf("El alumno tiene un %.2f, esta desaprobado \n",promedio);
        }

        if(promedio<promedio_menor){
            promedio_menor=promedio;
            legajo_menor=legajo;
        }

        total_alumnos++;

        printf("ingrese un numero de legajo(distinto de cero) \n");
        scanf("%d", &legajo);


    }
    printf("el total de alumnos es: %d \n", total_alumnos);
    printf("hay %d aprobados \n",aprobados);
    printf("hay %d desaprobados \n",desaprobados);
    printf("el promedio menor fue de %.2f del alumno con el legajo %d \n",promedio_menor,legajo_menor);

    return 0;

}
