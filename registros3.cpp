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

    return 0;
}

