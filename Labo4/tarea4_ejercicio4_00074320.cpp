/*Realizar un programa en c++ que verifique si la palabra ingresada es mayor a
10 caracteres o no y si la longitud es par o impar.*/
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    string palabra="";
    int caracteres=0;
    cout<<"\nIngrese una palabra: ";
    cin>>palabra;
    caracteres = palabra.length();
    if(caracteres>10){
        if(caracteres%2==0){
            cout<<"La palabra '"<<palabra<<"' tiene más de 10 caracteres ("<<caracteres<<") y dicha cantidad es par\n\n";
        }else{
            cout<<"La palabra '"<<palabra<<"' tiene más de 10 caracteres ("<<caracteres<<") y dicha cantidad es impar\n\n";
        }
    }else{
        if(caracteres%2==0){
            cout<<"La palabra '"<<palabra<<"' tiene menos de 10 caracteres ("<<caracteres<<") y dicha cantidad es par\n\n";
        }else{
            cout<<"La palabra '"<<palabra<<"' tiene menos de 10 caracteres ("<<caracteres<<") y dicha cantidad es impar\n\n";
        }
    }
    return 0;
}