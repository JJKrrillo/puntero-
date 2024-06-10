#include <iostream>
using namespace std ; 
int main (int argc , char * argv[])
 { 

    int edad ; 
    int * apuntador = &edad; // creamos apuntador a la memoria de x ; 
    cout << "Ingrese la edad de la persona : " ; 
    cin >> *apuntador; //Almacenamos en la memoria el dato 
    
    delete[] apuntador ; // Despues de generar con punteros es necesario liberar la memoria 
    apuntador = NULL ; 

    if (edad >= 18) 
    {
        cout << "La edad que usted ingreso es mayor " << endl ; 
    }
    else {
        cout << "La persona aun esta joven " << endl ; 
    }
    
     cout << "El espacio de la memoria de la variable es: " << &apuntador << "\n" ;


    return 0 ; 
}