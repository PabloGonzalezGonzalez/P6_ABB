//
//  main.cpp
//  P6_ABB
//
//  Created by Pablo González González on 29/4/18.
//  Copyright © 2018 Pablo González González. All rights reserved.
//

#include <iostream>
#include "arbol.hpp"
#include "dni.hpp"

int main(void) {
 
    cout << "PRACTICA 5: ARBOLES BINARIOS DE BUSQUEDA" << endl << endl;
    cout << "[1] Modo demostración" << endl;
    cout << "[2] Modo estadístico" << endl << endl;
    cout << "Introduce una opción:";
    int op;
    cin >> op;
    
    int dem = -1;
    ABB<dni_t> arbol;
    
    do{
        cout << endl << endl << "MODO DEMOSTRACION" << endl << endl;
        cout << "1. Insertar clave " << endl;
        cout << "2. Eliminar clave " << endl;
        cout << "0. Salir" << endl << endl;
        cout << "Introduce una opción:";
        cin >> dem;
        
        switch(dem){
                
            case 1:{
                cout << endl << "Introduzca los 8 digitos del DNI: ";
                long int num;
                cin >> num;
                
                cout << "Introduzca la letra del DNI: ";
                char let;
                cin >> let;
                
                dni_t dni(num, let);
                
                arbol.insertar(dni);
                
                arbol.write(cout);
                
                break;}
                
            case 2:{
                cout << endl << "Introduce los 8 digitos del DNI: ";
                long int num;
                cin >> num;
                
                cout << "Introudzca la letra del DNI: ";
                char let;
                cin >> let;
                
                dni_t dni(num,let);
                
                arbol.eliminar(dni);
                
                arbol.write(cout);

                break;}
                
            case 0:{break;}
                
            default:{break;}
        }
        
        
    }while(dem != 0);
    
    return 0;
}
