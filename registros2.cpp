#include <iostream>
#include <cstring>
using namespace std;

struct persona {
    char nombre[40];
    char DNI[40];
    int edad;
}informacion_persona;

int main() {
	persona persona[40];
    int n;
    cout << "Ingrese el numero de personas: "; cin >> n;
    int mayores50 = 0;
    double suma_edades = 0, promedio_edades;
    
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el nombre de la persona: "; cin>>persona[i].nombre;
        cout << "Ingrese el DNI de la persona: "; cin>>persona[i].DNI;
        cout << "Ingrese la edad de la persona: "; cin >> persona[i].edad;
    if (persona[i].edad > 50) {
            mayores50++;
        }
    suma_edades += persona[i].edad;
    }
    promedio_edades = suma_edades / n;
    cout << "Hay "<< mayores50 <<" personas mayores a 50 años. \n" << endl;
    cout << "El promedio de todas las edades de las personas es: " << promedio_edades << endl;
    
    cout << "\nLos datos de las personas ingresadas son: \n";
    for (int i = 0; i < n; i++) {
        cout << "Nombre: " << persona[i].nombre << endl;
        cout << "DNI: " << persona[i].DNI << endl;
        cout << "Edad: " << persona[i].edad << endl;
        cout << "--------------------------------\n";
    }return 0;
}
