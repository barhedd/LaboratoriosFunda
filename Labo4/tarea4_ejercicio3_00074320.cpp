/*Realizar un programa en c++ que verifique si un número es positivo, negativo
o cero.*/
#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"\n **** PROGRAMA QUE VERIFICA SI UN NÚMERO ES POSITIVO, NEGATIVO O CERO ****"<<endl;
    cout<<"Ingrese un número: ";
    cin>>num;
    if(num>0){
        cout<<"El número es positivo\n\n";
    }else if(num<0){
        cout<<"El número es negativo\n\n";
    }else{
        cout<<"El número es cero\n\n";
    }
    return 0;
}