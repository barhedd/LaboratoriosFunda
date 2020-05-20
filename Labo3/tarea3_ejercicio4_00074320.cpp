/*  Realizar un programa en c++ que reciba 1 producto comprado (nombre,
precio y cantidad comprada) y mostrar el total de dinero gastado. */
#include <iostream>
using namespace std;
int main(){
    string producto;
    float precio, total;
    int cantidad;
    cout<<"**** PROGRAMA QUE CALCULA EL TOTAL DE DINERO GASTADO EN UN PRODUCTO ****"<<endl;
    cout<<"Ingrese el nombre del producto: ";
    cin>>producto;
    cout<<"Ingrese el precio del producto: $";
    cin>>precio;
    cout<<"Ingrese la cantidad de unidades compradas: ";
    cin>>cantidad;
    total=precio*cantidad;
    cout<<"El total de dinero gastados en la compra del producto "<<producto<<" es: $"<<total;
    return 0;
}