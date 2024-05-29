#include<stdio.h>
/*
Una cafetería necesita un programa que le permita llevar un registro de las ventas de café durante una semana.
El programa debe permitir registrar las ventas de los últimos 7 días.
Por cada día se debe ingresar una cantidad desconocida de tazas de café vendidas y sus precios.
El proceso de ingreso finaliza al introducir un X.
Por cada venta se ingresa:
Tamaño de la taza de café un cararter (pequeña ‘P’, mediana ‘M’ o grande ‘G’).
Cantidad vendida, un número entero, mayor a 0.
Precio unitario, un número real, mayor a 0.
Al finalizar cada día, el programa debe calcular la cantidad total de tazas de café vendidas
y el monto total de las ventas de ese día.
Al finalizar los 7 días, el programa debe mostrar un resumen total que incluya:
la cantidad total de tazas de café vendidas, el monto total de las ventas,
el día en que se vendió menos y el monto vendido ese día.
*/
int main() {
    // Definir variables para cada día de la semana
    char tamanio;
    int cantidad;
    float precio;
    int total_tazas = 0;
    float total_ventas = 0;
    int dia_menor_ventas = 1;
    float menor_ventas = 999999; // Se inicializa con un valor muy grande

    // Iterar sobre los 7 días de la semana
    for (int dia = 1; dia <= 7; dia++) {
        printf("Día %d:\n", dia);

        // Inicializar el total de tazas y ventas del día
        int total_tazas_dia = 0;
        float total_ventas_dia = 0;

        // Registrar las ventas hasta que se ingrese 'X'
        while (1) {
            printf("Ingrese el tamaño de la taza (P, M, G): ");
            scanf(" %c", &tamanio);

            // Verificar si se debe terminar la entrada de ventas
            if (tamanio == 'X')
                break;

            printf("Ingrese la cantidad vendida: ");
            scanf("%d", &cantidad);

            printf("Ingrese el precio unitario: ");
            scanf("%f", &precio);

            // Calcular el total de tazas y ventas del día
            total_tazas_dia += cantidad;
            total_ventas_dia += cantidad * precio;
        }

        // Actualizar el total de tazas y ventas de la semana
        total_tazas += total_tazas_dia;
        total_ventas += total_ventas_dia;

        // Verificar si este día tiene las ventas más bajas
        if (total_ventas_dia < menor_ventas) {
            menor_ventas = total_ventas_dia;
            dia_menor_ventas = dia;
        }

        // Mostrar el resumen del día
        printf("\nResumen del día %d:\n", dia);
        printf("Total de tazas vendidas: %d\n", total_tazas_dia);
        printf("Monto total de ventas: %.2f\n\n", total_ventas_dia);
    }

    // Mostrar el resumen total de la semana
    printf("\nResumen total de la semana:\n");
    printf("Cantidad total de tazas vendidas: %d\n", total_tazas);
    printf("Monto total de ventas: %.2f\n", total_ventas);
    printf("Día con menos ventas: %d\n", dia_menor_ventas);
    printf("Monto vendido en el día %d: %.2f\n", dia_menor_ventas, menor_ventas);

    return 0;
}

/*
int main() {
    // Declaración de variables
    char tamaño;
    int cantidad;
    float precio;
    int total_tazas = 0;
    float total_ventas = 0;
    int min_dia = 1;
    float min_ventas = -1;

    // Loop para cada día
    for (int dia = 1; dia <= 7; dia++) {
        printf("Día %d\n", dia);
        float ventas_dia = 0;

        // Loop para ingresar ventas del día actual
        while (1) {
            printf("Ingrese el tamaño de la taza (P, M o G) y la cantidad vendida y el precio unitario (X para terminar): ");
            scanf(" %c", &tamaño);
            if (tamaño == 'X')
                break;
            scanf("%d %f", &cantidad, &precio);

            // Calcular ventas del día
            if (tamaño == 'P' || tamaño == 'M' || tamaño == 'G') {
                ventas_dia += cantidad * precio;
                total_tazas += cantidad;
            }
        }

        // Calcular total de ventas
        total_ventas += ventas_dia;

        // Actualizar mínimo de ventas
        if (min_ventas == -1 || ventas_dia < min_ventas) {
            min_ventas = ventas_dia;
            min_dia = dia;
        }

        printf("Ventas del día %d: %.2f\n", dia, ventas_dia);
    }

    // Mostrar resumen total
    printf("\nResumen total:\n");
    printf("Cantidad total de tazas de café vendidas: %d\n", total_tazas);
    printf("Monto total de las ventas: %.2f\n", total_ventas);
    printf("Día en que se vendió menos: %d\n", min_dia);
    printf("Monto vendido ese día: %.2f\n", min_ventas);

    return 0;
}
