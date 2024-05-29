/*
Datos: Un docente de nivel secundario necesita un programa que le ayude a calcular el promedio de las notas de sus alumnos
y la cantidad de aprobados.

Requerimiento:
Construir un programa que permita procesar una cantidad desconocida de alumnos.
Por cada alumno se ingresan 4 notas. Finalizan los ingresos de este proceso al introducir como “nombre” el carácter ‘F’

Por cada alumno se ingresa:
“Nombre”, un único carácter, distinto de ‘F’
nota 1, es un número entero, de 1 a 10
nota 2, es un número entero, de 1 a 10
nota 3, es un número entero, de 1 a 10
nota 4, es un número entero, de 1 a 10

Esta función debe emitir, por cada alumno el promedio de sus notas
y si está desaprobado o aprobado (se aprueba con un 6 o más) Ej.:
....
“Ingrese el nombre del alumno ('F' para finalizar) “
B
“Ingrese la nota 1”
6
“Ingrese la nota 2”
7
“Ingrese la nota 3”
5
“Ingrese la nota 4”
8
“El alumno B tiene un promedio de 6.5, el alumno está aprobado.”
“Ingrese el nombre del alumno “
G
“Ingrese la nota 1”
4
“Ingrese la nota 2”
7
“Ingrese la nota 3”
5
“Ingrese la nota 4”
6
El alumno G tiene un promedio de 4.5, el alumno está desaprobado.
.....

Al finalizar el ingreso de todos los alumnos el programa debe emitir:
El Total de alumnos, la cantidad de aprobados, la cantidad de desaprobados,
el promedio mayor y el “Nombre” (el caracter) del alumno que tuvo el promedio mayor.
(No es necesario contemplar el caso de que haya más de un alumno con el mismo promedio,
 asumir que todos los alumnos tienen distintos promedios)
*/
#include<stdio.h>

int main(){
    int nota1,nota2,nota3,nota4;
    int total_alumnos=0, cant_aprobados=0, cant_desaprobados=0;
    float promedio, promedio_max=0.0;
    char alumno, alumno_max;

    while(1){
         printf("Ingrese nombre del alumno (F para finalizar) \n");
         scanf(" %c", &alumno);
         if(alumno == 'F' || alumno == 'f'){
                 break;
         }else{
        printf("Ingrese nota 1 \n");
        fflush(stdin);
        scanf("%d", &nota1);

        printf("Ingrese nota 2 \n");
        fflush(stdin);
        scanf("%d", &nota2);

        printf("Ingrese nota 3 \n");
        fflush(stdin);
        scanf("%d", &nota3);

        printf("Ingrese nota 4 \n");
        fflush(stdin);
        scanf("%d", &nota4);

        promedio = (nota1 + nota2 + nota3 + nota4) / 4.0;

         if(promedio>=6){
                printf("El alumno tiene %.2f ,esta aprobado\n",promedio);
            cant_aprobados++;
         }else{
               printf("El alumno tiene %.2f ,esta desaprobado\n",promedio);
             cant_desaprobados++;
         }
         if(promedio > promedio_max){
            promedio_max = promedio;
            alumno_max = alumno;
         }
         total_alumnos++;
         }

    }

    printf("el total de alumnos es: %d \n",total_alumnos);
    printf("la cantidad de aprobados son: %d \n",cant_aprobados);
    printf("la cantidad de desaprobados son: %d \n",cant_desaprobados);
    printf("el promedio mayor fue de %.2f del alumno %c \n",promedio_max,alumno_max);


    return 0;

}
//no muestra el nombre del alumno max
