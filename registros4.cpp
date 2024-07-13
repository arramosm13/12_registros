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
    cout << "Ingrese el número de atletas que desea saber su informacion: "; cin >> n;
    return 0;
}
