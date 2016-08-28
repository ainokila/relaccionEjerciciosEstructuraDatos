#include<iostream>
#include<string>
#include<queue>

using namespace std;

struct Persona { 
   string nombre;
   string apellido;
   int prioridad; 
};

class comp {
	public:
		bool operator() (Persona a, Persona b){
			return a.prioridad<b.prioridad;
		}
};

int main(){

	priority_queue<Persona, vector<Persona>, comp> cola;

	//Aniado a la cola personas:
	Persona uno;
	uno.nombre="Pedro";
	uno.apellido="Lopez";
	uno.prioridad=5;
	cola.push(uno);

	Persona dos;
	dos.nombre="Antonio";
	dos.apellido="Lopez";
	dos.prioridad=3;
	cola.push(dos);

	Persona tres;
	tres.nombre="Jose";
	tres.apellido="Lopez";
	tres.prioridad=1;
	cola.push(tres);

	//Ya estan los 3 en la cola , ahora los imprimire : 

	while (!cola.empty()) {
		cout << cola.top().nombre << " ";
		cola.pop();
	}

	



}
