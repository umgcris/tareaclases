#include "persona.cpp"
#include <iostream>
using namespace std;
class Docente : Persona{
		// Atributos
		private : string codigo, nit,profesion;
		float salario;
			
		public: docente (){
		}
	Docente (string cui, string nom, string ape, string dir, string fn, int tel, bool gn) : Persona (cui,nom,ape,dir,fn,tel, gn){
	
	}
	// Metodos COnstructor
	// SET
	
	void setCui(string cui){cui = cui;}     
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){ apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setFecha_nacimiento(string fn){fecha_nacimiento = fn;}
	void setTelefono(int tel){telefono = tel;}
	
	// GET
	string getCui (){return cui;}
	string getNombres () {return nombres;}
	string getApellidos() {return apellidos;}
	string getDireccion() {return direccion;}
	string getFecha_Nacimiento() {return fecha_nacimiento;}
	int getTelefono() {return telefono;}
	bool getGenero() {return genero;}
	
	void mostrar (){
		cout<<"________________"<<endl;
		cout<<cui<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<fecha_nacimiento<<","<<telefono<<","<<genero<<endl;
	}
	
	void leer(){
	cout<<"Cui: "<<cui<<endl;
	cout<<"Nombres: "<<nombres<<endl;
	cout<<"Apellidos: "<<apellidos<<endl;
	cout<<"Direccion: "<<direccion<<endl;
	cout<<"Fecha_nacimiento: "<<fecha_nacimiento<<endl;
	cout<<"Telefono: "<<telefono<<endl;
	cout<<"Genero: "<<genero<<endl;
	}
	};
	
