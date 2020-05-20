/* Realizar un programa en c++ que devuelva el promedio de 3 números
enteros ingresados por el usuario. */
#include <iostream>
using namespace std;
int main(){
    int promedio, num1, num2, num3;
    cout<<"Hola, bienvenido a mis programa que te ayudará a calcular el promedio de 3 números enteros"<<endl;
    cout<<"Por favor ingresa los 3 números: "<<endl;
    cin>>num1>>num2>>num3;
    promedio=(num1+num2+num3)/3;
    cout<<"El promedio de los números es: "<<promedio;
    return 0;
}