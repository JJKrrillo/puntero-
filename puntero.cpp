#include <iostream>
using namespace std ;
int main (int argc , char * argv[]) 
{
    int x ; 
    int * apuntador = &x; // creamos apuntador a la memoria de x ; 
    cout << "Ingrese un numero entero: " ; 
    cin >> *apuntador; //Almacenamos en la memoria el dato 
    
    delete[] apuntador ; // Despues de generar con punteros es necesario liberar la memoria 
    apuntador = NULL ; 

     cout << "Usted ingreso el mismo numero: " << x << "\n" ;
     cout << "El espacio de la memoria de la variable es: " << &apuntador << "\n" ;


    return 0 ; 
}