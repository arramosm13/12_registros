#include <iostream>
#include <cstring>
using namespace std;

struct datos_atleta {
    char nombre[20];
    char pais[30];
    char disciplina[30];
    int medallas;
} atleta;

int main() {
    datos_atleta atleta[20];
    int n;
	char pais_buscar[30];
    cout << "Ingrese el numero de atletas que desea saber su informacion: "; cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el nombre del atleta: "; cin >> atleta[i].nombre;
        cout << "Ingrese el pais del atleta: "; cin >> atleta[i].pais;
        cout << "Ingrese la disciplina del atleta: "; cin >> atleta[i].disciplina;
        cout << "Ingrese el numero de medallas que tiene el atleta: "; cin >> atleta[i].medallas;
        cout << "------------------------------------------------------------------\n";
    }
    cout << "Ingrese el nombre del pais que desea buscar: "; cin >> pais_buscar;
    int max_medallas = -1;
    int maxmeda_buscar = -1;
    cout << "Los atletas ingresados que son de " << pais_buscar << " son:" << endl;
    for (int i = 0; i < n; i++) {
        if (strcmp(atleta[i].pais, pais_buscar) == 0) { 
            cout << "Nombre: " << atleta[i].nombre << ", Disciplina: " << atleta[i].disciplina << ", Numero de medallas: " << atleta[i].medallas << endl;
            if (atleta[i].medallas > max_medallas) {
                max_medallas = atleta[i].medallas;
                maxmeda_buscar = i;
            }
        }
    }
    if (maxmeda_buscar != -1) { 
        cout << "El atleta que tiene el mayor numero de medallas de " << pais_buscar << " es: "<< atleta[maxmeda_buscar].nombre << " con " << atleta[maxmeda_buscar].medallas << " medallas." << endl;
    } else {
        cout << "No hay ningun atleta registrado de " << pais_buscar << "." << endl;
    }
    return 0;
}
