#include<iostream>
#include <queue>
#include <string>

using namespace std;

template <class T>
class PilaConQueue{

	private:
		queue <T> primeroEsPrimero; // Los elementos estaran siempre en esta , push
		queue <T> ultimoEsPrimero; //Pop y top

	public:
	
	void push(T elemento){

		primeroEsPrimero.push(elemento);
	}

	T top(){

		T elemento;

		//Doy la vuelta a la pila para ver el primer elemento con un top
		while (!primeroEsPrimero.empty()) {

			ultimoEsPrimero.push(primeroEsPrimero.front());
			 primeroEsPrimero.pop();
   		 }

		elemento = ultimoEsPrimero.front();

		//Doy la vuelta a la pila para dejarla como estaba
		while (!ultimoEsPrimero.empty()) {

			primeroEsPrimero.push(ultimoEsPrimero.front());
			 ultimoEsPrimero.pop();
   		 }

		return elemento;

	}
	
	void pop(){

		//Doy la vuelta a la pila para ver el primer elemento con un top
		while (!primeroEsPrimero.empty()) {

			ultimoEsPrimero.push(primeroEsPrimero.front());
			 primeroEsPrimero.pop();
   		 }

		ultimoEsPrimero.pop();

		//Doy la vuelta a la pila para dejarla como estaba
		while (!ultimoEsPrimero.empty()) {

			primeroEsPrimero.push(ultimoEsPrimero.front());
			 ultimoEsPrimero.pop();
   		 }

		


	}
	bool empty(){
		return primeroEsPrimero.empty();
	}



};

int main(){

	
	PilaConQueue <int> prueba;

	prueba.push(5);
	prueba.push(4);
	prueba.pop();
	prueba.push(3);
	prueba.push(2);
	prueba.push(1);
	
	while (!prueba.empty()) {

        cout << prueba.top() << " " ;

        prueba.pop();
    }
}
