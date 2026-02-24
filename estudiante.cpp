#include "persona.cpp"	
#include <iostream>
using namespace std; 
class Estudiante : Persona{
	// atributos 
	private : string carnet;
	
	public: 
	Estudiante(){
		
		}
	Estudiante(string cui, string nom, string ape, string dir, string fn, int tel, bool gn, string carnet) : Persona(cui, nom, ape, dir, fn, tel, gn) {
     
    carnet = carnet;
}
	void setNit(string n){ carnet = n;}
	void setNombres(string nom){ nombres = nom;}
	void serApellidos(string ape){ apellidos = ape;}
	void setDireccion(string dir){ direccion = dir;}
	void setTelefono(int tel){ telefono = tel;}	
	
		
			void leer(){
		cout<<"Carnet: "<<carnet<<endl;
		cout<<"Nombres: "<<nombres<<endl;
		cout<<"Apellidos: "<<apellidos<<endl;
		cout<<"Direccion: "<<direccion<<endl;
		cout<<"Telefono: "<<telefono<<endl;
		}
	};
