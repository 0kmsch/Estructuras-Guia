/*
3) Utilice el ejercicio 1, modificándolo para que las notas del estudiante estén en un vector de notas
dentro de la estructura. Este vector de notas puede almacenar hasta 10 notas del alumno. Los lugares
no utilizados se escriben con un valor -1 para indicar que ese lugar está vacío.
De esta manera, un estudiante puede haber rendido 2 exámenes, otro 4 y otro 10, para citar algunos ejemplos. 
Se pide conservar la funcionalidad del programa teniendo en cuenta esta nueva organización de la información.
Por lo tanto, para mostrar el promedio del estudiante, habrá que considerar las notas que tiene en este
vector de notas, teniendo cuidado en utilizar solamente las notas que existan y omitiendo los -1 que pueda haber.
*/

#include <stdio.h>

struct ESTUDIANTES{
    int dni;
    int notas[10];
    int prom;
} est[5];

int main(){
    int i, j, l;
    int cantnotas;
    int suma = 0;

    for(i=0; i<=4; i++){
        printf("Digite la cantidad de notas del estudiante %d: ",i+1); 
        scanf("%d",&cantnotas);
        for(l=0; l<=9; l++){
            if(l+1 <= cantnotas){ // Cuando el iterador es menor a la cantidad de notas:
                printf("Digite la nota %d del estudiante %d: ",l+1,i+1); 
                scanf("%d",&est[i].notas[l]);
                suma += est[i].notas[l]; // Sumo en una variable los valores que el usuario va ingresando
            }
            else{   // Cuando el iterador es mayor a la cantidad de notas:
                est[i].notas[l] = -1; // Escribo -1 para indicar que el lugar quedo vacio
            }
        }
        est[i].prom = suma / cantnotas;
        suma = 0; // Reinicio el valor de suma para el siguiente estudiante
    }

    for(j=0; j<=4; j++){
            printf("Promedio del estudiante %d: %d\n",j+1,est[j].prom);
        }

}

// input de prueba: 
// cant1= 3 est1 = 5, 5, 5  cant2 = 3 est2 = 10, 1, 1  cant3 = 4 est3 = 6, 6, 2, 10  cant4 = 5  est4 = 1,1,5,6  