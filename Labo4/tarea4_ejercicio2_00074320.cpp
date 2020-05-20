/*Realizar un programa en c++ que verifique si un número es par o impar.*/
#include <iostream>
using namespace std;
int main(){
    int num=0;
    cout<<"\n **** PROGRAMA QUE VERIFICA SI UN NÚMERO ES PAR O IMPAR ****"<<endl;
    cout<<"Ingrese un número entero: ";
    cin>>num;
    if(num%2==0){
        cout<<"El número "<<num<<" es par";
    }else{
        cout<<"El número "<<num<<" es impar \n\n";
    }
    return 0;
}