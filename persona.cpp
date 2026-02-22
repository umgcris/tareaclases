#include <iostream>
using namespace std;

class Persona {
	protected: string cui, nombres, apellidos, direccion, fecha_nacimiento;
				int telefono;
				bool genero;
				public: 
		// Constructor
		
	protected: Persona(){
		
	}
	Persona(string cui, string nom, string ape, string dir, string fn, int tel, bool gn){
		cui = cui;
		nombres = nom;
		apellidos = ape;
		direccion = dir;
		fecha_nacimiento = fn;
		genero = gn;
	
	}
	// metodos
	void crear();
	void leer();
	void actualizar();
	void borrar();
		
};

