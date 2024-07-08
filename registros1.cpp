#include<iostream>
#include<cstring.>
using namespace std;
struct datos_empleado{
	char nombre[30];
	char sexo[2];
	double sueldo[5000];
} empresaDataTech;
int main(){
	datos_empleado  empleado[30];
	double n, mayor, menor, i;
	cout<<"Ingrese el numero de empleados: "; cin>>n;
	for (i=0; i<n; i++){
	cout<<"Ingrese el nombre del empleado: "; cin>>empleado[i].nombre;
	cout<<"Ingrese el sexo del empleado: "; cin>>empleado[i].sexo;
	cout<<"Ingrese el salario del empleado: "; cin>>empleado[i].salario;
	}
	

}