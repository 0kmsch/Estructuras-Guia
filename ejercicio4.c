/*
4) Una ferretería tiene un listado de facturas emitidas en cierto año, con estos datos: número de factura,
fecha de emisión (día y mes), nombre del cliente y monto total. Dado un vector de 10 facturas, se necesita
mostrar en pantalla cuál fue el mejor mes (o sea, el de mayor dinero facturado). Los datos se pueden 
ingresar por teclado o dejarlos fijos en el programa para no perder tiempo en tipear datos.
*/

#include <stdio.h>

struct FACTURAS{
    int num;
    int dia;
    char mes[20];
    char nombre_cliente [20];
    int monto;
};

struct FACTURAS factura[10] = {
                            {345, 05, "Enero", "Eduardo", 44500},
                            {122, 07, "Abril", "Alejandro", 102100},
                            {21, 11, "Marzo", "Jorgito", 99000},
                            {43, 12, "Mayo", "Julian", 104000},
                            {52, 14, "Julio", "Octavio", 88200},
                            {33, 22, "Septiembre", "Rodrigo", 50000},
                            {212, 24, "Junio", "Jorgina", 77400},
                            {55, 04, "Noviembre", "Claudia", 66000},
                            {11, 18, "Agosto", "Norma", 233500},
                            {301, 29, "Octubre", "German", 44000}
};

int main(){

    int i;
    int mejor_monto = 0;
    int aux;

    for(i=0;i<=9;i++){
        if(factura[i].monto > mejor_monto){
            mejor_monto = factura[i].monto;
            aux = i;
        }
    }

    printf("El mejor mes fue: %s",factura[aux].mes);

}