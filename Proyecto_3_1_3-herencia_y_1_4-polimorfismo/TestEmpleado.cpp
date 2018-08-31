/** TestEmpleado.cpp - Usa la clase Empleado*/
#include <iostream>
using std::cout;
using std::endl;

#include "Empleado.h"

int main(){
	cout<<"El nombre del empleados antes de instanciar cualquier objeto es "
	<<Empleado::getCuenta()<<endl;
	system("Pause");
	return 0;
}
