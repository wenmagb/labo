#include<stdio.h>
/*
Una tienda de ropa necesita un programa que le permita llevar un registro de ventas de cada día durante una semana.
Para ello, el programa debe permitir registrar las ventas de los últimos 7 días.
Por cada día se debe ingresar una cantidad desconocida de productos vendidos y sus precios.
Finaliza el proceso de ingreso al introducir un 0 (cero).
Por cada venta se ingresa:
Código del producto, un número entero, de 1 a 9999
Cantidad vendida, un número entero, mayor a 0
Precio unitario, un número real, mayor a 0
Al finalizar cada día, el programa debe calcular la cantidad total de productos vendidos y el monto total de las ventas de ese día.
Al finalizar los 7 días, el programa debe mostrar un resumen total que incluya: la cantidad total de productos vendidos, el monto total de las ventas, el día que se vendió más y el monto vendido ese día.
*/
int main(){
    int codigo_producto, cant_vendida, dia;
    float precio_unitario;

    int cant_total_produc_dia=0, cant_total_produc_semana=0;
    float monto_total_ventas_dia=0, monto_total_ventas_semana=0;

    int dia_max_ventas=0;
    float max_venta=0;


    for(dia= 0; dia<7; dia++){
        printf("Dia %d \n", dia+1);
        printf("Ingrese el codigo del producto \n");
        scanf("%d",&codigo_producto);
        if(codigo_producto==0){
            break;
        }
        printf("Ingrese el precio unitario \n");
        scanf("%f",&precio_unitario);
        printf("Ingrese la cantidad vendida \n");
        scanf("%d",&cant_vendida);

        cant_total_produc_dia +=cant_vendida;
        monto_total_ventas_dia += cant_vendida*precio_unitario;

        cant_total_produc_semana +=cant_vendida;
        monto_total_ventas_semana += cant_vendida*precio_unitario;

        printf("Se vendieron %d productos en el dia\n",cant_total_produc_dia);
        printf("El monto total de ventas en el dia es de %.2f \n", monto_total_ventas_dia);

        if(monto_total_ventas_dia > max_venta){
            max_venta=monto_total_ventas_dia;
            dia_max_ventas= dia+1;
        }

        cant_total_produc_dia =0;
        monto_total_ventas_dia =0;
    }

    printf("En la semana se vendieron %d productos\n",cant_total_produc_semana);
    printf("El monto total de ventas en la semana es de %.2f \n", monto_total_ventas_semana);
    printf("Dia de mayor ventas %d \n", dia_max_ventas);
    printf("Ventas de ese dia: %.2f \n",max_venta);

}
