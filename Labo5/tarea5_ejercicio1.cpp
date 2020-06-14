#include <iostream>
using namespace std;
//Prototipo de la función que calcula el MCD
int mcd(int mayor, int menor);
int main(){
    int num1, num2;
    cout<<"\n********************************************************";
    cout<<"\n\t\tMCD DE DOS NUMEROS"<<endl;
    cout<<"********************************************************"<<endl;
    cout<<"Ingrese el numero mayor: ";
    cin>>num1;
    cout<<"Ingrese el numero menor: ";
    cin>>num2;
    /*Invocamos la funcion que calcula el MCD e imprimimos a la vez el valor
    de retorno*/
    cout<<"\nEl MCD de los dos numeros es: "<<mcd(num1, num2);
    return 0;
}

/*Función que calcula el MCD. Como argumentos recibe los dos numeros ingresados
por el usuario*/
int mcd(int mayor, int menor){
    int residuo;
    do{
        residuo = mayor % menor;
        if(residuo!=0){
            mayor = menor;
            menor = residuo;
        }
    }while(residuo!=0);
    return menor;
}