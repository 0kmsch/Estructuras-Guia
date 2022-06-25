/*
1) Declare una estructura para almacenar datos de estudiantes
(DNI y dos notas correspondientes a los dos cuatrimestres del anio).
Haga un programa que permita ingresar los datos de 5 estudiantes en un vector de estas estructuras.
Luego de ingresar los datos se deben mostrar los DNI de cada estudiante y el promedio que tiene en sus examenes.
*/

#include <stdio.h>

struct ESTUDIANTES{
    int dni;
    int nota1;
    int nota2;
    int prom;
} est[5];

int main(){
    int i, j;

    for(i=0; i<=4; i++){
        printf("\nDigite el DNI del estudiante %d: ",i+1); 
        scanf("%d",&est[i].dni);
        printf("Digite la primera nota del estudiante %d: ",i+1); 
        scanf("%d",&est[i].nota1);
        printf("Digite la segunda nota del estudiante %d: ",i+1); 
        scanf("%d",&est[i].nota2);
        est[i].prom = (est[i].nota1 + est[i].nota2) / 2;
    }

    for(j=0; j<=4; j++){
            printf("\nDni %d: %d\n",j+1,est[j].dni);
            printf("Promedio %d: %d\n",j+1,est[j].prom);
        }

}