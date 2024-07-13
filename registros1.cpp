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
	double n, mayor, menor;
	cout<<"Ingrese el numero de empleados: "; cin>>n;
	for (int i=0; i<n; i++){
	cout<<"Ingrese el nombre del empleado: "; cin>>empleado[i].nombre;
	cout<<"Ingrese el sexo del empleado: "; cin>>empleado[i].sexo;
	cout<<"Ingrese el salario del empleado: "; cin>>empleado[i].sueldo;
	}
	menor=0;
	for(int i=0; i<n; i++){
		if (menor<empleado[i].sueldo){
			menor=empleado[i].sueldo;
		}cout<<"El empleado con menor sueldo es:"<<empleado[i].sueldo<<endl;
	} 
	mayor=0;
	for(int i=0; i<n; i++){
		if (mayor>empleado[i].sueldo){
			mayor=empleado[i].sueldo;
		}cout<<"El empleado con mayor sueldo es:"<<empleado[i].sueldo<<endl;
	} 
return 0;
}
