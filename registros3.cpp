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
    int n, mes_buscar, coincidencia=0;
    cout << "Ingrese el numero de personas que desea saber sus datos: "; cin >> n;
	for (int i = 0; i < n; i++) {
        cout << "Ingrese el nombre de la persona: "; cin >> persona[i].nombre;
        cout << "Ingrese el dia de nacimiento: "; cin >> persona[i].dia;
        cout << "Ingrese el mes de nacimiento: "; cin >> persona[i].mes;
        cout << "Ingrese el ano de nacimiento: "; cin >> persona[i].tiempo;
        cout << "--------------------------------\n";
    }
    
    do {
        cout << "Ingrese un numero de mes (la opcion 0 es para salir): "; cin >> mes_buscar;
		cout << "Las personas que cumplen anos en el mes " << mes_buscar << " son:" << endl;
        for (int i = 0; i < n; i++) {
            if (persona[i].mes == mes_buscar) {
                cout << "Nombre: " << persona[i].nombre << ", Día: " << persona[i].dia << ", Año: " << persona[i].tiempo << endl;
                coincidencia++;
            }
        }
        if (coincidencia == 0) {
            cout << "Ninguna persona cumple anos en el mes " << mes_buscar << "." << endl;
        }
    } while (mes_buscar != 0);
    cout << "Se cerrara el programa." << endl;
    return 0;
}

