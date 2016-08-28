#include<iostream>
#include <stack>
#include <string>

using namespace std;

template <class T>
class ColaConStack{

	private:
		stack <T> arribaUltimo; // Los elementos estaran siempre en esta 
		stack <T> arribaPrimero;

	public:
	
	void push(T elemento){

		arribaUltimo.push(elemento);
	}

	T front(){
		T elemento;

		//Doy la vuelta a la pila para ver el primer elemento con un top
		while (!arribaUltimo.empty()) {

			arribaPrimero.push(arribaUltimo.top());
			 arribaUltimo.pop();
   		 }

		elemento = arribaPrimero.top();

		//Doy la vuelta a la pila para dejarla como estaba
		while (!arribaPrimero.empty()) {

			arribaUltimo.push(arribaPrimero.top());
			 arribaPrimero.pop();
   		 }

		return elemento;

	}
	
	void pop(){

		//Doy la vuelta a la pila para ver el primer elemento con un top
		while (!arribaUltimo.empty()) {

			arribaPrimero.push(arribaUltimo.top());
			 arribaUltimo.pop();
   		 }

		arribaPrimero.pop();

		//Doy la vuelta a la pila para dejarla como estaba
		while (!arribaPrimero.empty()) {

			arribaUltimo.push(arribaPrimero.top());
			 arribaPrimero.pop();
   		 }

	}
	bool empty(){
		return arribaUltimo.empty();
	}



};

int main(){

	
	ColaConStack <int> prueba;

	prueba.push(5);
	prueba.pop();
	prueba.push(4);
	prueba.push(3);
	prueba.push(2);
	prueba.push(1);
	
	while (!prueba.empty()) {

        cout << prueba.front() << " " ;

        prueba.pop();
    }
}
