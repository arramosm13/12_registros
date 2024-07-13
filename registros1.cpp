#include<iostream>
#include<cstring>
using namespace std;
struct datos_empleado{
	char nombre[30];
	char sexo[2];
	int sueldo;
} empresaDataTech;
int main(){
	datos_empleado  empleado[30];
	int n;
	double mayor, menor;
	
	cout<<"Ingrese el numero de empleados: "; cin>>n;
	for (int i=0; i<n; i++){
	cout<<"Ingrese el nombre del empleado: "; cin>>empleado[i].nombre;
	cout<<"Ingrese el sexo del empleado: "; cin>>empleado[i].sexo;
	cout<<"Ingrese el salario del empleado: "; cin>>empleado[i].sueldo;
	}
	menor = empleado[0].sueldo;
    for (int i = 0; i < n; i++) {
        if (empleado[i].sueldo < menor) {
            menor = empleado[i].sueldo;
        }
    }
    mayor = empleado[0].sueldo;
    for (int i = 0; i < n; i++) {
        if (empleado[i].sueldo > mayor) {
            mayor = empleado[i].sueldo;
        }
	}
	cout << "El empleado con menor sueldo es: " << menor << endl;
    cout << "El empleado con mayor sueldo es: " << mayor << endl;
 
return 0;
}
