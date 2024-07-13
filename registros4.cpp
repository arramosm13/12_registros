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
    cout << "Ingrese el número de atletas que desea saber su informacion: "; cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el nombre del atleta: "; cin >> atleta[i].nombre;
        cout << "Ingrese el país del atleta: "; cin >> atleta[i].pais;
        cout << "Ingrese la disciplina del atleta: "; cin >> atleta[i].disciplina;
        cout << "Ingrese el número de medallas que tiene el atleta: "; cin >> atleta[i].medallas;
        cout << "--------------------------------\n";
    }
    cout << "Ingrese el nombre del país que desea buscar: "; cin >> pais_buscar;
    return 0;
}
