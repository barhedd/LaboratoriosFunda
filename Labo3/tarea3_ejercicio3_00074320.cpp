/* Realizar un programa en c++ que reciba a, b y c y nos devuelva el resultado
de la fórmula cuadrática. */
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float a,b,c, discriminante, x1, x2;
    cout<<"**** PROGRAMA QUE CALCULA LAS SOLUCIONES DE UNA ECUACIÓN CUADRÁTICA ****"<<endl;
    cout<<"Ingrese los valores de a, b y c: ";
    cin>>a>>b>>c;
    discriminante=((pow(b,2)-(4*a*c)));
    if(discriminante<0){
        cout<<"La ecuación no tiene solución en los reales";
    }else if(discriminante==0){
        x1 = (-b)/2*a;
        cout<<"La solución de la ecuación es x= 2"<<x1;
    }else{
        x1 = (-b+(sqrt((pow(b,2))-4*a*c)))/2*a;
        x2 = (-b-(sqrt((pow(b,2))-4*a*c)))/2*a;
        cout<<"Las soluciones de la ecuación son: "<<endl;
        cout<<"x1= "<<x1<<endl;
        cout<<"x2= "<<x2;
    }
    return 0;
}