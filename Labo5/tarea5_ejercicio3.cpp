#include <iostream>
using namespace std;
//Prototipo de la función que determina si el año es bisiesto o no
bool esBisiesto(int year);
int main(){
    int year = 0;
    cout<<"\n********************************************************";
    cout<<"\n\tPrograma para saber si un year es bisiesto"<<endl;
    cout<<"********************************************************"<<endl;
    cout<<"Digite un year: ";
    cin>>year;
    if(esBisiesto(year)){
        cout<<"\nEl year "<<year<<" SI es bisiesto";
    }else{
        cout<<"\nEl year "<<year<<" NO es bisiesto";
    }
    return 0;
}

/*Función que determina si el año ingresado por el usuario es bisiesto o no. El único parámetro
que recibe es el año ingresado por el usuario*/
bool esBisiesto(int year){
    if(year%400==0){
        return true;
    }else{
        if(year%4 == 0 && year%100 != 0){
            return true;
        }else{
            return false;
        }
    }
}