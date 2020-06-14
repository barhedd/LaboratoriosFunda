#include <iostream>
#include <ctime> //Librería que nos sirve para capturar la hora actual del sistema
using namespace std;
int main(){
    /*Declaramos las variables para almacenar las horas, minutos y segundos*/
    int hora, minuto, segundo; 

    /*Fecha/hora actual basado en el sistema actual*/
    time_t now = time(0);

    /*Objeto de una estrctura tm con fecha/hora local*/
    tm * time = localtime(&now);

    /*Guardamos los valores de hora, minutos y segundos en las variables*/
    hora = time->tm_hour;
    minuto = time->tm_min;
    segundo = time->tm_sec;

    cout<<"\n********************************************************";
    cout<<"\n    PROGRAMA QUE MUESTRA LA HORA ACTUAL DEL SISTEMA"<<endl;
    cout<<"\t\tY UN SEGUNDO DESPUES"<<endl;
    cout<<"********************************************************\n\n";

    /*Imprimimos la hora actual del sistema haciendo los ajustes correspondientes para que sea visualizada
    con el formato HH:MM:SS*/
    if(segundo<10 && minuto<10 && hora<10){
        cout<<"La hora actual del sistema al momento de ejectuar el programa es: 0"<<hora<<":0"<<minuto<<":0"<<segundo<<endl;
    }else if(segundo<10 && minuto<10){
        cout<<"La hora actual del sistema al momento de ejectuar el programa es: "<<hora<<":0"<<minuto<<":0"<<segundo<<endl;
    }else if(segundo<10 && hora<10){
        cout<<"La hora actual del sistema al momento de ejectuar el programa es: 0"<<hora<<":"<<minuto<<":0"<<segundo<<endl;
    }else if(minuto<10 && hora<10){
        cout<<"La hora actual del sistema al momento de ejectuar el programa es: 0"<<hora<<":0"<<minuto<<":"<<segundo<<endl;
    }else if(segundo<10){
        cout<<"La hora actual del sistema al momento de ejectuar el programa es: "<<hora<<":"<<minuto<<":0"<<segundo<<endl;
    }else if(minuto<10){
        cout<<"La hora actual del sistema al momento de ejectuar el programa es: "<<hora<<":0"<<minuto<<":"<<segundo<<endl;
    }else if(hora<10){
        cout<<"La hora actual del sistema al momento de ejectuar el programa es: 0"<<hora<<":"<<minuto<<":"<<segundo<<endl;
    }else{
        cout<<"La hora actual del sistema al momento de ejectuar el programa es: "<<hora<<":"<<minuto<<":"<<segundo<<endl;
    }
    
    /*Le sumamos un segundo a la hora actual capturada, realizando los respectivos ajustes de ser necesarios*/
    segundo += 1;
    if(segundo>=60){
        segundo = 0;
        minuto += 1; 
        if(minuto>=60){
            minuto = 0;
            hora += 1;
            if(hora>=24){
                hora = 0;
            }
        }
    }

    /*Imprimimos la hora actual del sistema un segundo después haciendo los ajustes correspondientes para 
    que sea visualizada con el formato HH:MM:SS*/
    if(segundo<10 && minuto<10 && hora<10){
        cout<<"La hora un segundo despues es: 0"<<hora<<":0"<<minuto<<":0"<<segundo;
    }else if(segundo<10 && minuto<10){
        cout<<"La hora un segundo despues es: "<<hora<<":0"<<minuto<<":0"<<segundo;
    }else if(segundo<10 && hora<10){
        cout<<"La hora un segundo despues es: 0"<<hora<<":"<<minuto<<":0"<<segundo;
    }else if(minuto<10 && hora<10){
        cout<<"La hora un segundo despues es: 0"<<hora<<":0"<<minuto<<":"<<segundo;
    }else if(segundo<10){
        cout<<"La hora un segundo despues es: "<<hora<<":"<<minuto<<":0"<<segundo;
    }else if(minuto<10){
        cout<<"La hora un segundo despues es: "<<hora<<":0"<<minuto<<":"<<segundo;
    }else if(hora<10){
        cout<<"La hora un segundo despues es: 0"<<hora<<":"<<minuto<<":"<<segundo;
    }else{
        cout<<"La hora un segundo despues es: "<<hora<<":"<<minuto<<":"<<segundo;
    }
    cout<<"\n\n";
    return 0;
}