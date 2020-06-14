/*NOTA ACLARATORIA: por motivos del lenguaje e impresión de caracteres en la consola, he omitido el uso de
acentos y elimine el uso de la letra "ñ", por tal razón, en vez de äño"utilizaré ÿear*/
#include <iostream>
using namespace std;
//Función auxiliar que nos permite saber si un año es bisiesto o no
bool esBisiesto(int year);
int main(){
    /*Declaramos las variables que almacenaran las fechas*/
    int dia, mes, year, dia_siguiente, mes_siguiente, year_siguiente;
    string fecha; //Variable para mostrar la fecha concatenada
    bool bisiesto=false; //Variable auxiliar que guarda el valor retornado por la función esBisiesto()
    cout<<"\n********************************************************";
    cout<<"\n    PROGRAMA QUE MUESTRA EL DIA SIGUIENTE A UNA "<<endl;
    cout<<"\t\tFECHA INGRESADA"<<endl;
    cout<<"********************************************************\n\n";
    cout<<"Digite el dia (dd): ";
    cin>>dia;
    cout<<"Digite el mes (mm): ";
    cin>>mes;
    cout<<"Digite el year (yyyy): ";
    cin>>year;

    bisiesto=esBisiesto(year);

    /*Realizamos las validaciones necesarias para determinar si la fecha ingresada por el usuario es correcta
    o no. Si se cumple alguna de las condiciones indicadas en el presente if, la fecha es incorrecta y se muestra
    al usuario error de digitación*/
    if(!(dia>=1 && dia<=31) || !(mes>=1 && mes<=12) || (year<0) || 
    (bisiesto==false && (mes==2 && dia>28)) || (bisiesto==true && (mes==2 && dia>29))){
        cout<<"\nError de digitacion en la fecha\n\n";
    }else{ //La fecha ingresada es válida
        /*Este if toma en cuenta todas las posibilidades en las cuales, la fecha ingresada corresponde al último día 
        de un mes (incluidos los años bisiesto), por lo cual, realiza los ajustes necesarios en las fechas*/
        if ((dia == 30 && (mes == 4 || mes == 6 || mes == 9 || mes == 11)) || 
        (dia == 29 && mes == 2) || (dia == 28 && mes == 2 && ((year % 4 != 0) || 
        (year % 100) == 0) && (year % 400) != 0) || dia == 31)
        {
                mes_siguiente = mes + 1;
                dia_siguiente = 1;
        }
        else{
                dia_siguiente = dia + 1;
                mes_siguiente = mes;
        }

        /*Este if determina si la fecha ingresada corresponde al último día de un año, por lo cual,
        realiza los ajustes necesarios para ese caso*/
        if (dia_siguiente == 1 && mes_siguiente == 13){
                mes_siguiente = 1;
                year_siguiente = year + 1;
        }else{
                year_siguiente = year;
        }

        /*Realizamos la impresión con los ajustes para que se muestre en formato DD, MM, YYYY de los valores de 
        día, mes y año correspondiente al día siguiente de la fecha ingresada*/
        cout<<"\nLos valores de dia, mes y year correspondiente al dia siguiente de la fecha ingresada son: "<<endl;
        if(dia_siguiente<10){
            cout<<"Dia: 0"<<dia_siguiente<<endl;
            if(mes_siguiente<10){
                cout<<"Mes: 0"<<mes_siguiente<<endl;
            }else{
                cout<<"Mes: "<<mes_siguiente<<endl;
            }
        }else{
            cout<<"Dia: "<<dia_siguiente<<endl;
            if(mes_siguiente<10){
                cout<<"Mes: 0"<<mes_siguiente<<endl;
            }else{
                cout<<"Mes: "<<mes_siguiente<<endl;
            }
        }
        cout<<"Year: "<<year_siguiente<<endl;
    
        /*Realizamos la impresión de la fecha concatenada en formato DD-MM-YYYY*/
        if(dia_siguiente<10 && mes_siguiente<10){
            cout<<"\nLa fecha en formato dd-mm-yy correspondiente al dia siguiente es: 0"<<dia_siguiente<<"-0"<<mes_siguiente<<"-"<<year_siguiente;
        }else if(dia_siguiente<10){
            cout<<"\nLa fecha en formato dd-mm-yy correspondiente al dia siguiente es: 0"<<dia_siguiente<<"-"<<mes_siguiente<<"-"<<year_siguiente;
        }else if(mes_siguiente<10){
            cout<<"\nLa fecha en formato dd-mm-yy correspondiente al dia siguiente es: "<<dia_siguiente<<"-0"<<mes_siguiente<<"-"<<year_siguiente;
        }else{
            cout<<"\nLa fecha en formato dd-mm-yy correspondiente al dia siguiente es: "<<dia_siguiente<<"-"<<mes_siguiente<<"-"<<year_siguiente;
        }
    }
    cout<<"\n\n";
    return 0;
}

/*Función auxiliar para determinar si el año ingresado es bisiesto o no*/
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

