/** Empleado.cpp Resuelve los metodos de la clase empleado*/
#include <iostream>
using std::cout;
using std::endl;
#include <cstring>
using std::strlen;
using std::strcpy;

#include "Empleado.h"
int Empleado::cuenta=0;

int Empleado::getcuenta(){
  return cuenta;
}

Empleado::Empleado(const char* const nombre, const char *const apellido){
  primerNombre=new char [strlen(nombre)+1];
  strcpy(primerNombre,nombre);

  apellidopaterno=new char [strlen(apellido+1)];
  strcpy(apellidoPaterno,apellido);

  cuenta++;
  cout<<"se llamó al constructor de empleados para "<<primernombre<<" ";
      <<apellidoPaterno<<"."<<endl;
}

//el destructor desasigna la memoria asignada de forma dinamica
Empleado::Empleado(){
	cout<<"se llamo a ~Empleado() para "<<primerNombre
	<<' '<<apellidoPaterno<<endl;
	delete[] primerNombre;
	delete[] apellidoPaterno;
	cuenta--;
}

const char* Empleado::getPrimerNombre() const{
	return primerNombre; 
}

const char* Empleado::getApellidoPaterno() const{
	return apellidoPaterno;
}