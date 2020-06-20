#include <iostream>
using namespace std;
//Prototipos de las funciones a utilizar
void llenarArreglo(int arreglo[]);
void mostrarArreglo(int arreglo[]);

int main(){
    int arreglo[100];
    llenarArreglo(arreglo);
    mostrarArreglo(arreglo);
    return 0;
}

//Función que llena el arreglo con los primeros 100 números impares
void llenarArreglo(int arreglo[]){
    int j = 0;
    /*La fórmula general para calcular cualquier número impar es (2n-1), donde "n" representa la posición
    del número que queremos encontrar. En nuestro caso, dado que el último número impar que queremos calcular es
    el que ocupa la posición 100, entonces n = 100 y tenemos: (2(100)-1) = 199. Por lo tanto, los primeros 100
    números impares abarcan desde el 1 al 199, así que inicializamos nuestro for en 1 y hacemos que recorra hasta 199*/
    for(int i = 1; i <200; i++){
        if(i%2 != 0){
            arreglo[j] = i;
            j++;
        }
    } 
}

//Función que limprime los primeros 100 números impares en orden descendente
void mostrarArreglo(int arreglo[]){
    for(int i=99; i>=0; i--){
        cout<<arreglo[i]<<"\t";
    }
}