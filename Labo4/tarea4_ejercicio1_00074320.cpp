/*Realizar un programa en c++ que verifique si un número es divisible entre
otro.*/
#include <iostream>
using namespace std;
int main(){
    int num1=0, num2=0;
    cout<<"\n **** PROGRAMA QUE VERIFICA SI UN NÚMERO ES DIVISIBLE ENTRE OTRO ****"<<endl;
    cout<<"Ingrese un número: ";
    cin>>num1;
    cout<<"Ingrese el número entre el cual desea dividir: ";
    cin>>num2;
    if(num1%num2==0){
        cout<<num1<<" es divisible entre "<<num2;
    }else{
        cout<<num1<< " NO es divisible entre "<<num2<<"\n\n";
    }
    return 0;
}