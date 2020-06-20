#include <iostream>
using namespace std;
//Prototipos de las funciones a utilizar
void leerArreglo(float arreglo[], int N);
void sumarArreglos(float arreglo1[], float arreglo2[], int N, float resultado[]);
void desplegarResultado(float resultado[], int N);

int main(){
    int size;
    cout<<"\n********************************************************";
    cout<<"\n\t    PROGRAMA QUE SUMA DOS ARREGLOS"<<endl;
    cout<<"********************************************************"<<endl;
    cout<<"Ingrese el tamano de los dos arreglos: ";
    cin>>size;
    float arreglo1[size], arreglo2[size], resultado[size];

    //Llenado del primer arreglo
    cout<<"\n>LLENANDO EL PRIMER ARREGLO"<<endl;
    leerArreglo(arreglo1, size);

    //Llenado del segundo arreglo
    cout<<"\n>LLLENANDO EL SEGUNDO ARREGLO"<<endl;
    leerArreglo(arreglo2, size);

    //Realizando la suma de los arreglos
    sumarArreglos(arreglo1, arreglo2, size, resultado);

    //Desplegando los resultados;
    cout<<"\n>DESPLEGANDO LOS RESULTADOS"<<endl;
    desplegarResultado(resultado, size);

    return 0;
}

//Función que lee los datos del arreglo
void leerArreglo(float arreglo[], int N){
    for(int i=0; i<N; i++){
        cout<<"Ingrese el dato de la posicion ["<<i<<"]: ";
        cin>>arreglo[i];
    }
}

//Función que suma los dos arreglos
void sumarArreglos(float arreglo1[], float arreglo2[], int N, float resultado[]){
    for(int i=0; i<N; i++){
        resultado[i] = arreglo1[i] + arreglo2[i];
    }
}

//Función que muestra los resultados de la suma
void desplegarResultado(float resultado[], int N){
    for(int i=0; i<N; i++){
        cout<<"La suma de los arreglos en la posicion ["<<i<<"] es: "<<resultado[i]<<endl;
    }
}