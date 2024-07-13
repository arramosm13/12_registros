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
    
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el nombre de la persona: "; cin>>persona[i].nombre;
        cout << "Ingrese el DNI de la persona: "; cin>>persona[i].DNI;
        cout << "Ingrese la edad de la persona: "; cin >> persona[i].edad;
    if (persona[i].edad > 50) {
            mayores50++;
        }
    }
    cout << "Hay "<< mayores50 <<" personas mayores a 50 años. " << endl;
return 0;
}
