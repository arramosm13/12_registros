#include <iostream>
#include <cstring>
using namespace std;

struct datos_persona {
    char nombre[40];
    int dia;
    int mes;
    int tiempo;
} datos;

int main() {
    datos_persona persona[40];
    int n;
    cout << "Ingrese el numero de personas que desea saber sus datos: "; cin >> n;
	for (int i = 0; i < n; i++) {
        cout << "Ingrese el nombre de la persona: "; cin >> persona[i].nombre;
        cout << "Ingrese el dia de nacimiento: "; cin >> persona[i].dia;
        cout << "Ingrese el mes de nacimiento: "; cin >> persona[i].mes;
        cout << "Ingrese el año de nacimiento: "; cin >> persona[i].tiempo;
        cout << "--------------------------------\n";
    }
    return 0;
}

