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
    cout << "Ingrese el n�mero de atletas que desea saber su informacion: "; cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el nombre del atleta: "; cin >> atleta[i].nombre;
        cout << "Ingrese el pa�s del atleta: "; cin >> atleta[i].pais;
        cout << "Ingrese la disciplina del atleta: "; cin >> atleta[i].disciplina;
        cout << "Ingrese el n�mero de medallas que tiene el atleta: "; cin >> atleta[i].medallas;
        cout << "--------------------------------\n";
    }
    cout << "Ingrese el nombre del pa�s que desea buscar: "; cin >> pais_buscar;
    return 0;
}
