/* Realizar un programa en c++ que reciba el radio de un círculo y calcular su
área y perímetro. */
#include <iostream>
#include <cmath> //Incluimos la librería cmath que nos servirá para elevar el radio al cuadrado
using namespace std;
int main(){
    const float PI = 3.1416; //Declaramos una constante con el valor de PI
    float radio=0, area=0, perimetro=0;
    cout<<"**** PROGRAMA QUE CALCULA EL ÁREA Y EL PERÍMETRO DE UN CÍRCULO ****"<<endl;
    cout<<"Ingrese el radio del círculo: ";
    cin>>radio;
    area=PI*(pow(radio, 2));
    perimetro=2*PI*radio;
    cout<<"El área del círculo es: "<<area<<endl;
    cout<<"El perímetro del círculo es: "<<perimetro;
    return 0;
}
