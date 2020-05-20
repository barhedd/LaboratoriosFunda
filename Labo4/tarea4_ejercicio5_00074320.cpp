/*Realizar un programa en c++ que verifique si la palabra ingresada inicia y
finaliza con la misma letra*/
#include <iostream>
#include <cstring> //incluimos esta librería para el manejo de cadenas de caracteres
using namespace std;
int main(){
    string palabra = ""; //variable que almacena la palabra ingresada por el usuario
    string aux_palabra = ""; //variable auxiliar que almacenará la palabra invertida
    /*arreglos de caracteres que almacenanarán el valor de las variables "palabra" y "aux_palabra" 
    para manejarlas con funciones de la librería "cstring"*/
    char arreglo_cadena[100], arreglo_aux_cadena[100];

    cout<<"\n **** PROGRAMA QUE VERIFICA SI UNA PALABRA INICIA Y FINALIZA CON LA MISMA LETRA ****"<<endl;
    cout<<"Ingrese una palabra: ";
    cin>>palabra;

    /*Invertimos la palabra ingresada por el usuario y la almacenamos en "aux_palabra" 
    Por ejemplo, si el usuario ingresa "hola", dentro de "aux_palabra" almacenamos "olah"*/
    for (int i = palabra.size()-1; i >=0 ; i--)
        aux_palabra += palabra[i];

    /*Con la función strcpy almacenamos el valor de las variables de tipo string "palabra" y "aux_palabra" 
    en dos arreglos de tipo char*/
    strcpy(arreglo_cadena, palabra.c_str());
    strcpy(arreglo_aux_cadena, aux_palabra.c_str());

    /*Utilizamos la función "strncmp" para comparar la primer letra de la palabra ingresada por el usuario
    con la primer letra de la palabra invertida, lo cual, es equivalente a comparar la primera y la última letra
    de la misma palabra. Si la función nos devuelve 0 como valor, significa que hasta el índice  
    de los arreglos que le hemos indicado que compare son iguales.*/
    if (strncmp(arreglo_cadena, arreglo_aux_cadena, 1) == 0)
    {
        cout<<"La palabra '"<<palabra<<"' inicia y finaliza con la misma letra ("<<arreglo_cadena[0]<<")\n\n";
    }else{
        cout<<"La palabra '"<<palabra<<"' NO finaliza con la misma letra que inicia\n\n";
    }
    return 0;
}