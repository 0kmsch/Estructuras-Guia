/*2) Una aerolinea tiene vuelos, los cuales poseen un código alfanumérico
(ejemplo: AR1500), una ciudad de origen y una ciudad de destino. 
Ingrese 4 vuelos en un vector. Luego de ingresados los datos permita que 
el usuario escriba el nombre de una ciudad y muestre los vuelos que parten y 
los que arriban a esa ciudad. 
Si no hubiera vuelos para la ciudad ingresada debe mostrarse un mensaje de error.
*/

#include <stdio.h>
#include <string.h>


struct VUELOS{
    char codigo [20];
    char origen [20];
    char destino [20];
};

struct VUELOS vuelo[2] = {
                            {"NO1532", "Normandia", "Caracas"},
                            {"SP3003", "Sao Pablo", "Lima"},
                            {"LO4902","Londres","Chaco"},
                            {"MI9240","Miami","Edimburgo"}
                        };


int main(){
    int i, fl=0;
    char ciudad[20];
    printf("Digite la ciudad: "); 
    gets(ciudad);

    for(i=0;i<=1;i++){
        if(strcmp(vuelo[i].origen, ciudad) == 0 || strcmp(vuelo[i].destino, ciudad) == 0){
            printf("El vuelo %s parte desde %s hasta %s.",vuelo[i].codigo,vuelo[i].origen,vuelo[i].destino);
            fl = 1;
        }
    }
    if(fl == 0){
        printf("No hay vuelos con origen o destino de esa ciudad.");
    }
    
}