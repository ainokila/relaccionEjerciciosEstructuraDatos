#include<iostream>
#include <queue>
#include <stack>
#include <string>

using namespace std;

bool distintos(char uno , char otro){	
	return !(uno==otro);
}

bool comprobar(string str){

	bool solucion = true;

	queue<char> cola;
	stack<char> pila;
	int porCerrar = 0 ; 

	for(int i = 0 ; i < (int)str.length() && solucion ; i++ ) {

		if(str.at(i) == '(' ){

			porCerrar++;
			cola.push(str.at(i));
			pila.push(str.at(i));

		}else if (str.at(i) == ')'){

			if(porCerrar != 0){
				porCerrar--;
				cola.push(str.at(i));
				pila.push(str.at(i));

			}else{
				solucion =false;

			}
		}
	}

	if(porCerrar!=0){
		solucion = false;
	}

	// Ya estan todos los elementos '(' y ')' del string en la cola y pila , ahora vamos a comprobar:
	// Cuando extraiga en cada uno debe ser su contrario en el otro lado si no estara mal.


	while (!cola.empty() && solucion) { // Ambas tienen el mismo numero de elementos

		if(!distintos( pila.top(),cola.front() ) ){
			solucion = false;
		}

        pila.pop();
		cola.pop();
    }

	return solucion;
}


int main(){

	string bueno = "((5+3)/(8+5))";
	string malo = ")(5+8)(";

	if(comprobar(bueno)){
		cout << "Bueno es correcto\n";

	}else{
		cout << "Bueno es incorrecto\n";
	}

	if(comprobar(malo)){
		cout << "Malo es correcto\n";

	}else{
		cout << "Malo es incorrecto\n";
	}

	if(comprobar(bueno)&&!comprobar(malo)){
		cout << "La comprobacion funciona\n";
	}else{
		cout << "La comprobacion funciona\n";
	}




}
