/**Empleado.h - Declara la clase empleado*/

#ifndef Empleado_H
#define Empleado_H

class Empleado{
  public:
    //constructor
	Empleado(const char * const, const char * const);
	//destructor
	~Emplado();

	const char *getPrimerNombre() const; //devuelve el primer nombre
	const char *getApellidoPaterno() const;  //devuelve el apellido paterno

	static int getCuenta();  //devuelve el numero de objetos instanciados

  private:
    char *primerNombre;
	char apellidoPaterno;

	//datos static
	static int cuenta;  //numeros de objetos intanciados
}; //end class empleado

#endif /*Empleado_H*/